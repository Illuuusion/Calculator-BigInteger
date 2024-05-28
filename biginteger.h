#ifndef CALCULATOR_BIGINTEGER_H
#define CALCULATOR_BIGINTEGER_H

#include <string>
#include <vector>
#include <cmath>


class BigInteger {
private:
    std::string num;
    std::string removeZeros(std::string str);
    BigInteger maximum(BigInteger obj1, BigInteger obj2);
    std::string pow(std::string str1, std::string str2);
    std::string shortDivide(std::string s, unsigned long long num2);
public:
    BigInteger() = default;
    explicit BigInteger(int number);
    explicit BigInteger(std::string number);
    explicit BigInteger(long number);
    explicit BigInteger(long long number);
    explicit BigInteger(short number);
    BigInteger(BigInteger& number);
    ~BigInteger() = default;
    bool operator==(const BigInteger& num2) const;
    bool operator!=(const BigInteger& num2) const;
    BigInteger operator+(BigInteger& num2);
    BigInteger operator-(BigInteger& num2);
    BigInteger operator++();
    BigInteger operator--();
    BigInteger& operator=(BigInteger const& num2);
    bool operator>(BigInteger& num2) const;
    bool operator<(BigInteger& num2) const;
    bool operator<=(BigInteger& num2) const;
    bool operator>=(BigInteger& num2) const;
    BigInteger operator*(BigInteger& num2);
    BigInteger operator/(BigInteger& num2);
    BigInteger operator%(BigInteger& num2);
    BigInteger operator+=(BigInteger& num2);
    BigInteger operator-=(BigInteger& num2);
    BigInteger operator*=(BigInteger& num2);
    BigInteger operator/=(BigInteger& num2);
    BigInteger operator%=(BigInteger& num2);
    friend std::ostream &operator << (std::ostream& stream, const BigInteger &number){
        stream << number.num;
        return stream;
    }
    friend std::istream &operator >> (std::istream& stream, BigInteger &number) {
        stream >> number.num;
        return stream;
    }
};


#endif //CALCULATOR_BIGINTEGER_H

