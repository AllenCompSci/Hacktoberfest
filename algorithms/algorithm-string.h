#include "prototype.h"

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
