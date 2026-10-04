#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { 
    x+=1;
    return ; 
}

bool isOdd(int x) {
    if (x<0){x=-x;}
    if (x%2==1){return true;}
    else{return false;}
     }

int floatToInt(float x) { 
    int y=static_cast<int>(x);
    return y; }

int factorial(int n) {
    if (n>=0){
        int fact=1;
        while(n>0){
            fact*=n; 
            n-=1;       
        }
        return fact;
    }
    else {return -1;} 
}

}; // namespace homework
