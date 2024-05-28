#include "facade.h"

bool Facade::addNumber(AppContext* context, std::string number) {
    bool check = false;
    if (context->current[context->current.length() - 1] != ')'){
        context->current.append(number);
        check = true;
    }
    return check;
}

bool Facade::addPoint(AppContext *context){
    bool check = false;
    if (context->current != "" && context->current[context->current.length() - 1] != '+'
            && context->current[context->current.length() - 1] != '-'
            && context->current[context->current.length() - 1] != '*'
            && context->current[context->current.length() - 1] != '/'
            && context->current[context->current.length() - 1] != '.'
            && context->current[context->current.length() - 1] != '('
            && context->countPoint == 0){
        context->current.append(",");
        context->countPoint = 1;
        check = true;
    }
    return check;
}

bool Facade::addSign(AppContext *context, std::string sign){
    bool check = false;
    if (context->current != "" && context->current[context->current.length() - 1] != '+'
            && context->current[context->current.length() - 1] != '-'
            && context->current[context->current.length() - 1] != '*'
            && context->current[context->current.length() - 1] != '/'
            && context->current[context->current.length() - 1] != ','
            && context->current[context->current.length() - 1] != '('){
        context->current.append(sign);
        context->countPoint = 0;
        check = true;
    }
    return check;
}

bool Facade::addLeft(AppContext *context){
    bool check = false;
    if (context->current[context->current.length() - 1] != ','
            && !std::isdigit(context->current[context->current.length() - 1])
            && context->current[context->current.length() - 1] != ')')
    {
        context->current.append("(");
        ++context->countLeft;
        check = true;
    }
    return check;
}

bool Facade::addRight(AppContext *context){
    bool check = false;
    if (context->current[context->current.length() - 1] != ','
            && context->current != ""
            && context->current[context->current.length() - 1] != '+'
            && context->current[context->current.length() - 1] != '-'
            && context->current[context->current.length() - 1] != '*'
            && context->current[context->current.length() - 1] != '/'
            && context->countLeft - context->countRight >= 1
            && context->countLeft != context->countRight)
    {
        ++context->countRight;
        context->current.append(")");
        check = true;
    }
    return check;
}

bool Facade::clear(AppContext *context){
    context->current = "";
    context->countPoint = 0;
    return true;
}

bool Facade::deleteSymbol(AppContext *context){
    bool check = false;
    if (context->current != ""){
        if (context->current[context->current.length() - 1] == ',') context->countPoint = 0;
        if (context->current[context->current.length() - 1] == ')') --context->countRight;
        if (context->current[context->current.length() - 1] == '(') --context->countLeft;
        context->current.erase(context->current.length() - 1, 1);
        check = true;
    }
    return check;
}

void Facade::calculate(AppContext *context){
    Math dijkstra(context->current);
    context->answer = dijkstra.Calculation();
}
