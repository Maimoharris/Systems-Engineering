#include <iostream>

//workin with new and delete
/*C++ uses the new and delete operators to allocate and release memory, and this
means that objects of any type can be created and destroyed.*/

int main(void){
    int *ptr_int;
    ptr_int = new int; //the return type for new is a memory address. so since ptr is also a memory address ptr = address from new
    
    std::string *ptr_str;// this create a memory address of size=sizeof(std::string) but nor at runtime (not dynamically)
    ptr_str = new std::string; // This creates a memory address at runtime of size=sizeof(std::string)

    long *ptr_long;
    ptr_long = new long;//No inintialization of Long Object
    *ptr_long = 125656;

    double *ptr_double;
    double z =168.23;
    ptr_double = new double(z); //Inintialization of Dounle object

    ++(*ptr_double); //we can incriment the value
    *ptr_double += *ptr_long; // We can add double to long

    //NB: Very Important (In this case position of * matters)

    int* ptr_demo = new int; // this is differetnt from (here assign new addree to ptr_demo)
    int *ptr_demo1 = new int; // from this (here store address inside the memory address of ptr_demo1)
/*If you do not call delete, the dynamically allocated memory space is not released until
the program terminates.*/
//Now Lets see how we can free the Memory
    //Syntax delete pointer;
    delete ptr_double, ptr_long, ptr_demo1, ptr_demo,ptr_int;
    /*
    do not call delete twice for the same object
    do not use delete to release statically allocated memory.
    */
    return 0;
}