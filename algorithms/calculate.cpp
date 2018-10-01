// AUTHOR : theshrewedshrew @ https://github.com/theshrewedshrew
// REASON : Create a program, and or series of cpp files capable of calculating any two numbers.
// NEEDS  : ADD() SUB() MULTI() DIVIDE() MOD()

#include "algorithm-string.h"

using namespace std;


int ADD(int a, int b)
{
    return a+b;
}

int SUB(int a, int b)
{
    return a-b;
}

int MULTI(int a, int b)
{
    return a*b;
}

int DIVIDE(int a, int b)
{
    if(b!=0)
        return a/b;

}

int MOD(int a, int b)
{
    return a%b;

}
// a ^ b
int POW(int a, int b)
{
    if(b == 0){
        return 1;
    }
    
    if(b == 1){
        return a;
    }
    
    int i, res = a;
    for(i = 1; i < b; i++){
        res = res * a;
    }
    return res;
}

void main(){


}
