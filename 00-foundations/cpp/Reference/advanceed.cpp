#include <iostream>


//This function retuens an lvalue
int &LGetValue(void){
    int static value = 10;
    return value;
}

// More like int &LGetVlaue = x;

int RGetValue(void){
    return 10;
}

// More like int RGetValue = 10;
int main(void){

    LGetValue() = 100; //OK: this is possible since the return is an lvlaue
    //Normally we have this as normal referece (X is called an lvalue because it has a memory address and it not destroyed after use)
    RGetValue() = 50; //Error: not possible since RGetValue is an rvalue and we can not assign an rvalue to an rvalue or lvalue (10==10 or 10 = x )
    int x = 4;
    int& ref = x;
    //conseider a case where we have 
    
    int&& ref1 = x+5; // this is possible since the value on RHS is an rvalue and is temporary
                      // we also can do &&ref1 since its an rvalue int &&ref = x is not possible since its lvalue

    //But special case
    const int &ref = 10;

    return 0;
}