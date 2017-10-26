#include "prototype.h"

void trimStr(std::string& x){
 bool isNeg = ((int)x.length() > 0) && x[0] == '-';
 if(isNeg) 
   x = x.substr(1);
 while((int)x.length() > 0 && x[0] == '0') 
  x = x.substr(1);
 if(isNeg && x!= "0")
   x = '-' + x;
}


void placeHandler(std::string& x, std::string& y){
 trimStr(x);
 trimStr(y);
 bool x_isNeg = ((int)x.length() > 0) && x[0] == '-';
 bool y_isNeg = ((int)y.length() > 0) && y[0] == '-';
 if(x_isNeg)
  x = x.substr(1);
 if(y_isNeg)
  y = y.substr(1);
 while((int)x.length() < (int)y.length()){
  x = "0" + x;
 }
 while((int)x.length() > (int)y.length()){
  y = "0" + y;
 }
}

int cmprLen(std::string x, std::string y){
 return ((int)x.length() - (int)y.length()) / abs((int)x.length() - (int)y.length());
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
  if((int)x.length() > 0 && x[0] == '-'){
   if((int)y.length() > 0 && y[0] == '-'){
       
   }
    else{
      return true;
    }
  }
  else if ((int)y.length() > 0 && y[0] == '-'){
    return false; 
  }
  if((int)x.length() == (int)y.length()){
    for(int i = 0; i < (int)x.length(); i++)
      if(x[i] < y[i]){
       return true;
      }
    else if(x[i] != y[i]{
      return false;
    }
  }
  else if((int)x.length() < (int)y.length()){
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
