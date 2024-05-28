#ifndef MATH_H
#define MATH_H

#include "biginteger.h"
#include <unordered_map>
#include <stack>

class Math {
private:
    std::string expressionInfix;
    std::string expressionPostfix;
    std::unordered_map<char, int> priority;
    std::string getNumberFromStr(std::string str, int pos);
    bool point = false;
    void toPostfix();
    long double executeDouble(char op, long double num1, long double num2);
    BigInteger executeBigInteger(char op, BigInteger num1, BigInteger num2);
public:
    Math(std::string str);
    std::string Calculation();

};

#endif // MATH_H
