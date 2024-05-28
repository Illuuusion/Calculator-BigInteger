#ifndef LEXEM_H
#define LEXEM_H

#include "biginteger.h"

struct Operator{
    int priority;
    int arity;
    union {
        BigInteger (*binary)(BigInteger, BigInteger);
        BigInteger (*unary)(BigInteger);
    };
};

struct Operand{
    BigInteger value;
};

struct Lexem
{
    int type;
    union {
      Operand operand;
      Operator operator1;
    };
};

#endif // LEXEM_H
