#include <iostream>
// learning how much memory a varible occupy per unit
void GetTypeSizes(void){
    std:;std::cout << "========================Sizes of Fundamental Types==============================\n" << std::endl;
    // Checking out the sizes of every fundamental types (int,char,long,short,long,float,double,long double,void) using sizeof() 
    std::cout<<"Interger Size :"<<sizeof(int)<<std::endl;
    std::cout<<"Character Size:"<<sizeof(char)<<std::endl;
    std::cout<<"Size of a Decimal (Float):"<<sizeof(float)<<std::endl;
    std::cout<<"Size of a boolean:"<<sizeof(bool)<<std::endl;
    std::cout<<"Size of Double:"<<sizeof(double)<<std::endl;
    std::cout<<"Size of Long (Int):"<<sizeof(long)<<std::endl;
    std::cout<<"Size of Long Double:"<<sizeof(long double)<<std::endl;
    //std::cout<<"Size of Long void:"<<sizeof(void)<<std::endl; <-- this is not possible since it can not be a variable type
    std::cout<<"Size of Short (int):"<<sizeof(short)<<std::endl<<std::endl;
    //std::cout<<"Size of Unsinged Long "<<sizeof(unsingned long)<<std::endl; <-- Not Possible since unsingned long (unsigned word) is not a type
    std::cout<<"===================================End===================================================\n";

}
// Jus some basic computation exercise
void exercise1(void){
    std::cout<<"\n\n================================Exercise 1 ==============================================\n";
    double float1 = 123.456, float2 = 76.543;
    std::cout << "Sum:"<< float1 + float2 << std::endl;
    std::cout << "Difference:"<<float1 - float2  <<std::endl<<std::endl;
}

void exercise2(void){
    //learning what volatile and const are all about
    // volatile makes a compiler to assume a varibale has changed always.
    volatile int phone_number = 680226898; //can be modified by external events and this program
    volatile const int country_code = 237; // Can be modified by external events but not this program
    
    //country_code = 247; not possible
    phone_number = 681704241;

}

int main(void){
    GetTypeSizes();
    exercise1();
}