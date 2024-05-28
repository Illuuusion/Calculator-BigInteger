#ifndef FACADE_H
#define FACADE_H

#include "AppContext.h"
#include "math.h"

class Facade {
public:
    Facade() = default;
    bool addNumber(AppContext* context, std::string number);
    bool addPoint(AppContext* context);
    bool addSign(AppContext* context, std::string sign);
    bool deleteSymbol(AppContext* context);
    bool clear(AppContext* context);
    bool addLeft(AppContext* context);
    bool addRight(AppContext* context);
    void calculate(AppContext* context);
};

#endif // FACADE_H
