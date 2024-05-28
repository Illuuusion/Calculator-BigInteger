#include "biginteger.h"

BigInteger::BigInteger(std::string number): num(number){}

BigInteger::BigInteger(int number): num(std::to_string(number)){}

BigInteger::BigInteger(long number): num(std::to_string(number)){}

BigInteger::BigInteger(short number): num(std::to_string(number)){}

BigInteger::BigInteger(long long number): num(std::to_string(number)){}

BigInteger::BigInteger(BigInteger &number): num(number.num){}

std::string BigInteger::removeZeros(std::string str) {
    if(str == "0")
        return str;
    if(str[0] == '-') {
        int i = 1;
        while(str[i] == '0') {
            str.erase(i, 1);
        }
        return str;
    } else if(str[0] == '0') {
        int i = 0;
        while(str[i] == '0') {
            str.erase(i, 1);
        }
        return str;
    }
    return str;
}

BigInteger BigInteger::maximum(BigInteger obj1, BigInteger obj2) {
    if (obj1.num > obj2.num)  return obj1;
    else return obj2;
}

std::string BigInteger::pow(std::string str1, std::string str2) {
    if(str2 == "0") {
        return "1";
    } else if(str1 == "0") {
        if(str2[0] == '-')
            return std::to_string((long long int)std::pow(0, -5));
        return "0";
    } else if(str1[0] == '-' && str2[0] == '-') {
        if(str1 == "-1" && str2 == "-1") {
            return "-1";
        } else if(str1 == "-1") {
            if((((int)str2[str2.length()-1])-48) & 1) {
                return "-1";
            } else {
                return "1";
            }
        } else {
            return "0";
        }
    } else if(str1[0] == '-') {
        if((((int)str2[str2.length()-1])-48) & 1)
            return '-' + pow(str1.erase(0, 1), str2);
        return pow(str1.erase(0, 1), str2);
    } else if(str2[0] == '-') {
        if(str1 == "1") {
            return str1;
        } else {
            return "0";
        }
    } else {
        std::string init_str1 = str1;
        while(str2 != "1") {
            BigInteger a = BigInteger(str1);
            BigInteger b = BigInteger(init_str1);
            BigInteger c = BigInteger(str2);
            BigInteger d = BigInteger("1");
            str1 = (str1, init_str1);
            str2 = (c - d).num;
        }
        return str1;
    }
}


bool BigInteger::operator==(const BigInteger& num2) const{
    bool check = false;
    if (num == num2.num) check = true;
    return check;
}

bool BigInteger::operator!=(const BigInteger& num2) const{
    bool check = false;
    if (num != num2.num) check = true;
    return check;
}

BigInteger BigInteger::operator+(BigInteger& num2) {
    int i, j, result, carry = 0;
    std::string answer;
    for (i = num.length() - 1, j = num2.num.length() - 1; i > -1 && j > -1; --i, --j) {
        char str1 = num[i];
        char str2 = num2.num[j];
        result = str1 - '0' + str2 - '0' + carry;
        carry = result / 10;
        answer = std::to_string(result % 10) + answer;
    }
    if (i >= 0)
        for (int g = i; g != -1; --g) {
            carry ? answer = std::to_string((num[g] - '0' + carry) % 10) + answer
                    : answer = num[g] + answer;
            if (carry) carry = (num[g] - '0' + carry) / 10;
        }
    if (j >= 0)
        for (int g = j; g != -1; --g) {
            carry ? answer = std::to_string((num2.num[g] - '0' + carry) % 10) + answer
                    : answer = num2.num[g] + answer;
            if (carry) carry = num2.num[g] - '0' + carry / 10;
        }
    if (carry != 0) {
        int last = answer[0] - '0';
        last += carry;
        answer.erase(0, 1);
        answer = std::to_string(last) + answer;
    }
    return BigInteger(answer);
}

BigInteger BigInteger::operator-(BigInteger& num2) {
    int str1_len = num.length();
    int str2_len = num2.num.length();
    std::string sum;
    if(num == num2.num) {
        return BigInteger("0");
    } else if(num[0] == '-' && num2.num[0] == '-') {
        if(str2_len == 1 && str1_len == 1) {
            sum = "0";
        } else {
            BigInteger t1(num.erase(0, 1));
            BigInteger t2(num2.num.erase(0, 1));
            BigInteger temp = t2 - t1;
            BigInteger mx = maximum(t2, t1);
            if(temp.num[0] != '-' && mx.num == t1.num)
                sum = "-" + temp.num;
            else
                sum = temp.num;
        }
    } else if(num[0] == '-') {
        BigInteger a(num.erase(0, 1));
        sum = "-" + (a + num2).num;
    } else if(num2.num[0] == '-') {
        BigInteger a(num2.num.erase(0, 1));
        sum = (a + *this).num;
    } else {
        int i, j, track_sum, carry = 0;
        if(str1_len < str2_len) {
            sum = "-" + (num2 - *this).num;
            return BigInteger(removeZeros(sum));
        } else if(str1_len == str2_len) {
            BigInteger mx = maximum(*this, num2);
            if(mx.num == num2.num) {
                sum = "-" + (num2 - *this).num;
                return BigInteger(removeZeros(sum));
            }
        }
        int val1, val2;
        for(i = str1_len-1, j = str2_len-1; i >= 0 || j >= 0; --i, --j) {
            if (i >= 0)
                val1 = (int) num[i] - 48;
            else
                val1 = 0;

            if (j >= 0)
                val2 = (int) num2.num[j] - 48;
            else
                val2 = 0;

            track_sum = val1 - val2 - carry;
            if (track_sum < 0){
                track_sum += 10;
            carry = 1;
            }else
                carry = 0;

            sum = std::to_string(track_sum) + sum;
        }
    }
    return BigInteger(removeZeros(sum));
}

BigInteger BigInteger::operator++() {
    BigInteger a(1);
    return (*this + a);
}

BigInteger BigInteger::operator--() {
    BigInteger a(1);
    return (*this - a);
}

BigInteger& BigInteger::operator=(BigInteger const& num2) {
    num = num2.num;
    return *this;
}

bool BigInteger::operator<(BigInteger &num2) const{
    bool check = true;
    if (num > num2.num) check = false;
    return check;
}

bool BigInteger::operator>(BigInteger &num2) const{
    bool check = true;
    if (num < num2.num) check = false;
    return check;
}

bool BigInteger::operator>=(BigInteger &num2) const{
    bool check = true;
    if (num < num2.num) check = false;
    return check;
}

bool BigInteger::operator<=(BigInteger &num2) const{
    bool check = true;
    if (num > num2.num) check = false;
    return check;
}

BigInteger BigInteger::operator*(BigInteger &num2) {
    bool toAddNeg = false;
    int str1_len = num.length();
    int str2_len = num2.num.length();
    std::string ans;
    if(num[0] == '-' && num2.num[0] == '-') {
        BigInteger a(num.erase(0, 1));
        BigInteger b(num2.num.erase(0, 1));
        ans = (a * b).num;
    } else if(num[0] == '-') {
        toAddNeg = true;
        BigInteger a(num.erase(0, 1));
        ans = (a * num2).num;
    } else if(num2.num[0] == '-') {
        toAddNeg = true;
        BigInteger a(num2.num.erase(0, 1));
        ans = (*this * a).num;
    } else {
        if (str1_len == 0 || str2_len == 0)
            return BigInteger("0");
        std::vector<int> result(str1_len + str2_len, 0);
        int i_n1 = 0;
        int i_n2 = 0;
        for (int i=str1_len-1; i>=0; i--) {
            int carry = 0;
            int n1 = num[i] - '0';
            i_n2 = 0;
            for (int j=str2_len-1; j>=0; j--) {
                int n2 = num2.num[j] - '0';
                int sum = n1*n2 + result[i_n1 + i_n2] + carry;
                carry = sum/10;
                result[i_n1 + i_n2] = sum % 10;
                i_n2++;
            }
            if (carry > 0)
                result[i_n1 + i_n2] += carry;
            i_n1++;
        }
        int i = result.size() - 1;
        while (i>=0 && result[i] == 0)
            i--;
        if (i == -1)
            return BigInteger("0");
        while (i >= 0)
            ans += std::to_string(result[i--]);
    }
    if(toAddNeg && ans[0]!='0') {
        ans = '-' + ans;
    }
    return BigInteger(ans);
}

BigInteger BigInteger::operator/(BigInteger &num2) {
    std::string ans;
    if(num2.num == "0") {
        throw std::exception();
    } else if(num == num2.num) {
        return BigInteger("1");
    } else if(num[0] == '-' && num2.num[0] == '-') {
        BigInteger a(num.erase(0, 1));
        BigInteger b(num2.num.erase(0, 1));
        ans = (a / b).num;
    } else if(num[0] == '-') {
        BigInteger a(num.erase(0, 1));
        std::string temp = (a / num2).num;
        if(temp == "0")
            ans = temp;
        else
            ans = '-' + temp;
    } else if(num2.num[0] == '-') {
        BigInteger a(num2.num.erase(0, 1));
        std::string temp = (*this / a).num;
        if(temp == "0")
            ans = temp;
        else
            ans = '-' + temp;
    } else {
        if(num2.num == "1")
            return *this;
        if(num == "0")
            return *this;
        if(num2.num.length() <= 19) {
            const char *str2 = num2.num.c_str();
            ans = shortDivide(num, atoll(str2));
        }
        else {
            std::string temp = num2.num;
            std::string count = "0";
            while(num == maximum(*this, num2).num) {
                int lenDiff = num.length() - num2.num.length();
                if(lenDiff > 0 && num[0] > num2.num[0]) {
                    BigInteger a = BigInteger(count);
                    BigInteger b = BigInteger(pow("10", std::to_string(lenDiff)));
                    count = (a + b).num;
                    BigInteger mult = BigInteger((num2 * b).num);
                    num = (*this - mult).num;
                } else if(lenDiff > 0) {
                    BigInteger a = BigInteger(count);
                    BigInteger b = BigInteger(pow("10", std::to_string(lenDiff - 1)));
                    count = (a + b).num;
                    a.num = count;
                    count = (a + b).num;
                    BigInteger mult = BigInteger((num2 * b).num);
                    num = (*this - mult).num;
                } else {
                    BigInteger a = BigInteger(count);
                    BigInteger b = BigInteger("1");
                    count = (a + b).num;
                    num = (*this - num2).num;
                }
            }
            ans = count;
        }
    }
    return BigInteger(ans);
}

std::string BigInteger::shortDivide(std::string s, unsigned long long num2) {
    std::string ans;
    int idx = 0;
    long long int temp = s[idx] - '0';
    while (temp < num2) {
        temp = temp*10 + (s[++idx] - '0');
        if(idx >= s.length())
            break;
    }
    while (s.length() > idx) {
        ans += (temp / num2) + '0';
        temp = (temp % num2)*10 + num[++idx] - '0';
    }

    if (ans.length() == 0)
        return "0";

    return ans;
}

BigInteger BigInteger::operator%(BigInteger& num2){
    BigInteger del = *this / num2;
    del = num2 * del ;
    return *this - del;
}

BigInteger BigInteger::operator+=(BigInteger& num2){
    *this = *this + num2;
    return *this;
}

BigInteger BigInteger::operator-=(BigInteger& num2){
    *this = *this - num2;
    return *this;
}

BigInteger BigInteger::operator*=(BigInteger& num2){
    *this = *this * num2;
    return *this;
}

BigInteger BigInteger::operator/=(BigInteger& num2){
    *this = *this / num2;
    return *this;
}

BigInteger BigInteger::operator%=(BigInteger &num2) {
    *this = *this % num2;
    return *this;
}
