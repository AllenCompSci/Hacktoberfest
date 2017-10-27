#include "prototype.h"

void trimStr(std::string& x){
    std:: cpy = "";
    // left trim
    bool val = true;
    for(int i = 0; i < (int)x.length(); i++){
        if(val){
            if(x[i] != ' '){
                val = true;
                cpy = x[i];
            }
        }
        else{
            cpy += x[i];         
        }
    }
    x = cpy;
    // right trim
    val = true;
    for(int i = x.length() - 1; i >= 0; i--){
        if(val){
            if(x[i] != ' '){
                val = true;
                cpy = x[i];
            }
        }
        else{
            cpy += x[i];         
        }
    }
    x = cpy;
    bool neg = isNeg(x);
    if(neg) 
        sign(x);
    else
        trimAbsStr(x);
    if(neg && x!= "0")
        x = '-' + x;
}

void trimStr(std::string& x, std::string& y){
    trimStr(x);
    trimStr(y);
}

void trimAbsStr(std::string& x){
    while((int)x.length() > 0 && x[0] == '0') 
        x = x.substr(1);
}
void sign(std::string& x){
    if(isNeg(x)){
        x = abs(x);
        trimAbsStr();
    }
    else{
        trimAbsStr();
        x = "-" + x;
    }
}

void placeHandler(std::string& x, std::string& y){
    trimStr(x, y);
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
    if(x_isNeg)
        sign(x);
    if(y_isNeg)
        sign(y);
}

void placeHandler(std::vector<std::string>& x){
    int x_Size = (int)x.size();
    std::vector<bool> isNegVec;
    int maxSize = 0;
    for(int i = 0; i < x_Size; i++){
        trimStr(x[i]);
        bool x_isNeg = isNeg(x[i]);
        if(x_isNeg)
            sign(x[i]);
        isNegVec.push_back(x_isNeg);
        maxSize = maxSize > (int)x[i].length() ? maxSize : (int)x[i].length();
    }
    for(int i = 0; i < x_Size; i++){
        while((int)x[i].length() < maxSize){
            x[i] = "0" + x[i];    
        }
        if(isNegVec[i]){
            sign(x[i]);
        }
    }
}
    
int cmprLen(std::string x, std::string y){
    return ((int)x.length() != (int) y.length()) ? ((int)x.length() - (int)y.length()) / abs((int)x.length() - (int)y.length()) : 0;
}

std::string abs(std::string x){
    return isNeg(x) ? x.substr(1) : x;
}

std::string ADD(std::vector<std::string> NUMS){ // ADD for Multiply when vectors are created
    int size_NUMS = (int) NUMS.size(); 
    std::vector<std::string> POS;
    std::vector<std::string> NEG;
    std::vector<std::string> tmp;
    for(int i = 0; i < size_NUMS; i++){
        if(isNeg(NUMS[i]))
            NEG.push_back(NUMS[i]);
        else
            POS.push_back(NUMS[i]);
    }
    placeHandler(POS);
    placeHandler(NEG);
    tmp.clear();
    /// Stopping point USE tmp to hold the poped values and clear between pos and neg. stop when tmp.clear() is empty and pos/neg size = 1
    /* DONT WANT TO DO... THIS IS CURRENT IMPLEMENTATION
    do{
        do{
            tmp.push_back(ADD(POS.pop(), POS.pop()));
        }while((int)(POS.size())>2);
        do{
            POS.push_back(tmp.pop());
        }while(!tmp.empty());
        placeHandler(POS);
    }while((int)(POS.size()) == 1);
    INSTEAD 
    */
    std::string temp = "0";
    int carry = 0;
    if((int)POS.size()>0){
        for(int j = POS[0].length() - 1; j >= 0; j--){ // j index of string
            int HOLD = 0;
            for(int i = 0; i < (int)POS.size(); i++){ // i index of vector
                HOLD += POS[i][j] - 48;
            }
            HOLD += carry; // ADDS PREVIOUS CARRY
            temp = (char)((HOLD % 10) + 48) + temp; 
            carry = HOLD / 10; // Integer Division
        }
        while(carry != 0){
            temp = (char)((carry % 10) + 48) + temp; 
            carry /= 10;
        }
    }
    else{
        temp = "0";   
    }
    POS.clear();
    POS.push_back(temp);
    temp = "";
    if((int)NEG.size()>0){
        for(int j = NEG[0].length() - 1; j >= 0; j--){ // j index of string
            int NEG = 0;
            for(int i = 0; i < (int)NEG.size(); i++){ // i index of vector
                HOLD += NEG[i][j] - 48;
            }
            HOLD += carry; // ADDS PREVIOUS CARRY
            temp = (char)((HOLD % 10) + 48) + temp; 
            carry = HOLD / 10; // Integer Division
        }
        while(carry != 0){
            temp = (char)((carry % 10) + 48) + temp; 
            carry /= 10;
        }
    }
    else{
        temp = "0";   
    }
    return SUB(POS.pop(), temp);
}
    
std::string ADD(std::string x, std::string y){
    if(isNeg(x) && isNeg(y)){
        sign(x);
        sign(y);
        return "-" + ADD(x,y);
    }
    else if(isNeg(x)){
        sign(x);
        return SUB(y,x);
    }
    else if(isNeg(y)){
        sign(y);
        return SUB(x,y);
    }
    placeHandler(x,y);
    std::result = "";
    int carry = 0;
    for(int i = (int)x.length() - 1; i >= 0; i--){
        char value = x[i] /* char value is 48 larger than numeric */+ y[i] /* same */ - 48 /* we have to subtract 48 2 times then add it back once */ + carry;
        if(value > '9'){
            carry = 1;
            value -= 10;
        }
        else
            carry = 0;
        result = (char)value + result;            
    }
    if(carry > 0)
        result = (char)(carry+48) + result;
    trimStr(result);
    return result;
}
std::string SUB(std::string x, std::string y){ // THIS IS X - Y
    if(isNeg(x) && isNeg(y)){
        // - (x - y) Need to check if y is larger than x. AFTER NEG
        sign(x);
        sign(y);
        return SUB(y,x);
    }
    else if(isNeg(x)){
        sign(x);
        return "-" + ADD(x, y);   
    }
    else if(isNeg(y)){
        sign(y);
        return ADD(x,y);   
    }
    // Decimal Future
    
    if(isLessThan(x,y){
        return "-" + SUB(y,x);   
    }
    placeHandler(x,y);
    std::string result = "";
    // This X will Always be greater than Y
    for(int i = (int)x.length()-1; i>= 0; i--){
        int val = x[i] - y[i] - 48;
        if(val < 48){
            val += 10;
            x[i-1]--;
        }
        result = (char)(val + 48) + result;
    }
    return result;
}
std::string DIVIDE(std::string, std::string){
  
}
std::string INTDIV(std::string x, std::string y){
    std::string temp = DIVIDE(x,y);
    if(temp.find(' ')>0){
        temp = temp.substr(0,temp.find(' '));   
    }
    trimStr(temp);
    return temp;
}
std::string MULTI(std::string, std::string){
  
}
std::string MOD(std::string, std::string){ /// Do Mod Last... Neeed Add. Sub Mult. Divide. IntDiv
  
}
std::string gcd(std::string x, std::string y){
    trimStr(x,y);
    if(isEqualTo(y, "0")){
        return x;
    }
    else
        return gcd(y, MOD(x,y));
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
bool isEven(std::string x){
    return x[x.length() - 1] % 2 == 0;   
}
bool isOdd(std::string x){
    return !isEven(x);
}
