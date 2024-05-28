#include "math.h"

Math::Math(std::string str): expressionInfix(str) {
    priority['('] = 0;
    priority['+'] = 1;
    priority['-'] = 1;
    priority['*'] = 2;
    priority['/'] = 2;
}

std::string Math::getNumberFromStr(std::string str, int pos){
    std::string strNumber = "";
    for (; pos < str.length(); ++pos){
        char num = str[pos];
        if (num == '.') point = true;
        if (std::isdigit(num) || num == ',')
            strNumber += num;
        else{
            --pos;
            break;
        }
    }
    return strNumber;
}

void Math::toPostfix() {
    std::stack<char> stack;
    for (int i = 0; i < expressionInfix.length(); ++i){
        char c = expressionInfix[i];
        if (std::isdigit(c))
        {
            int length = getNumberFromStr(expressionInfix, i).length();
            expressionPostfix += getNumberFromStr(expressionInfix, i) + " ";
            i += length - 1;
        }
        else if (c == '(')
            stack.push(c);
        else if (c == ')')
        {
            while (!stack.empty() && stack.top() != '(') {
                expressionPostfix += stack.top();
                stack.pop();
            }
            stack.pop();
        }
        else if (priority[c]){
            char op = c;
            if (op == '-' && (i == 0 || (i > 1 && priority[expressionInfix[i-1]])))
                op = '~';
            while (!stack.empty() && (priority[stack.top()] >= priority[op])){
                expressionPostfix += stack.top();
                stack.pop();
            }
            stack.push(op);
        }
    }
    while(!stack.empty()){
        expressionPostfix += stack.top();
        stack.pop();
    }
}

long double Math::executeDouble(char op, long double num1, long double num2){
    switch (op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/':
        if (num2 == 0) throw std::exception();
        else return num1 / num2;
    }
}

BigInteger Math::executeBigInteger(char op, BigInteger num1, BigInteger num2){
    switch (op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num1 / num2;
    }
}

std::string Math::Calculation() {
    toPostfix();
    std::stack<long double> localsDouble;
    int counter = 0;
    for (int i = 0; i < expressionPostfix.length(); i++)
    {
        char c = expressionPostfix[i];

        if (std::isdigit(c))
        {
            std::string number = getNumberFromStr(expressionPostfix, i);
            localsDouble.push(std::stold(number));
            i += number.length() - 1;
        }
        else if (priority[c])
        {
            ++counter;
            if (c == '~')
            {
                double last = !localsDouble.empty() ? localsDouble.top() : 0;
                localsDouble.push(executeDouble('-', 0, last));
                continue;
            }
            double second = !localsDouble.empty() > 0 ? localsDouble.top() : 0;
            localsDouble.pop();
            double first = !localsDouble.empty() ? localsDouble.top() : 0;
            localsDouble.pop();
            localsDouble.push(executeDouble(c, first, second));
        }
    }
    return std::to_string(localsDouble.top());
}
