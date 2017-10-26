#include <iostream> /* cout cin */
#include <stdlib.h> /* abs */
#include <string> /* string */
#include <vector> /* vector */
#include <stdarg.h> /* va_list, va_start, va_arg, va_end */


void trimStr(std::string&);
void trimStr(std::string&, std::string&);
void trimAbsStr(std::string&);
void placeHandler(std::string& , std::string&);
void placeHandler(std::vector<std::string>&);
void sign(std::string&);
void sign(std::string&, std::string&);
int cmprLen(std::string, std::string);

std::string abs(std::string);
std::string ADD(std::vector<std::string>&);
std::string ADD(std::string, std::string);
std::string SUB(std::string, std::string);
std::string DIVIDE(std::string, std::string);
std::string INTDIV(std::string, std::string);
std::string MULTI(std::string, std::string);
std::string MOD(std::string, std::string);
std::string gcd(std::string, std::string);

bool isNeg(std::string);
bool isEven(std::string);
bool isOdd(std::string);
bool isLessThan(std::string, std::string);
bool isEqualTo(std::string, std::string);
bool isGreaterThan(std::string, std::string);
