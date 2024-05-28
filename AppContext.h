#ifndef APPCONTEXT_H
#define APPCONTEXT_H

#include <string>

struct AppContext{
    std::string current;
    std::string save;
    std::string answer;
    int countLeft = 0;
    int countRight = 0;
    int countPoint = 0;
};


#endif // APPCONTEXT_H
