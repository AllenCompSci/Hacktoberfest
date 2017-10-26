#include "prototype.h"

void trimStr(std::string& x){
    bool neg = isNeg(x);
    if(neg) 
        sign(x);
    else
        trimAbsStr(x);
    if(neg && x!= "0")
        x = '-' + x;
}

void trimAbsStr(std::string& x){
    while((int)x.length() > 0 && x[0] == '0') 
        x = x.substr(1);
}
void sign(std::string& x){
    if(isNeg(x)){
        x = x.substr(1);
        trimAbsStr();
    }
    else{
        trimAbsStr();
        x = "-" + x;
    }
}

void placeHandler(std::string& x, std::string& y){
    trimStr(x);
    trimStr(y);
    bool x_isNeg = isNeg(x);
    bool y_isNeg = isNeg(y);
    if(x_isNeg)
        sign(x);
    if(y_isNeg)
        sign(y);
    while(cmprLen(x,y) != 0){
        if(cmprLen(x,y) < 1){
            x = "0" + x;
        }
        else{
            y = "0" + y;
        }
}

int cmprLen(std::string x, std::string y){
    return ((int)x.length() != (int) y.length()) ? ((int)x.length() - (int)y.length()) / abs((int)x.length() - (int)y.length()) : 0;
}

std::string ADD(std::string, std::string){
  
}
std::string SUB(std::string, std::string){
  
}
std::string DIVIDE(std::string, std::string){
  
}
std::string MULTI(std::string, std::string){
  
}
std::string MOD(std::string, std::string){
  
}
std::string gcd(std::string x, std::string y){
    trimStr(x);
    trimStr(y);
}

bool isLessThan(std::string x, std::string y){
    if(isNeg(x)){
        if(!isNeg(y)){
            return true;
        }
    }
    else if (isNeg(y)){
        return false; 
    }
    if(cmprLen(x,y) == 0){
        for(int i = 0; i < (int)x.length(); i++)
            if(x[i] < y[i]){
                return true;
            }
            else if(x[i] != y[i]{
                return false;
            }
    }
    else if(cmprLen(x,y)<1){
       return true;
    }
    return false;
}
bool isEqualTo(std::string x, std::string y){
    return x == y;
}
bool isGreaterThan(std::string, std::string){
    return !isEqualtTo(x,y) && !isLessThan(x,y);
}
bool isNeg(std::string x){
    return ((int)x.length() > 0) && x[0] == '-'; 
}
