#include <iostream>

void swap(int* ptr1, int* ptr2){ //Here we use pointers as parameters to a function so that later we can pass in memory addresses as arguments
    std::cout<<"Before Var1:"<<*ptr1<<" Var2:"<<*ptr2<<std::endl;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    std::cout<<"Before Var1:"<<*ptr1<<" Var2:"<<*ptr2<<std::endl;
}


int main(void){
    int x=30, y=25;
    swap(&x, &y); //Here we are pssing memory addresses as argument to a function since our parameters are pointers
                  //With this, the function wont make a copy of these arguments in memory but use them directly saving memory usage
    
    
    int var, *ptr, &add = var;  //Pointers are derived types (T*)

    ptr = &var; //A varibale that holds a memory address is called a pointer
    *ptr = 5; // in that memory address insert 4 (done using *)
    *ptr += 5; //Mathematical Oparation on pointers (* -> Use to Access the value in a pointer address)

    return 0;
}