#include <iostream>
// Basics to know
int main(void){
    int age = 30; //Original Value
    int &rAge =age; //Reference to the value
    std::cout<<"Original:"<<&age<<" Reference:"<<rAge<<std::endl;
    rAge+=3; //Opration with the referece changes the original value
    std::cout<<"Original:"<<age<<" Reference:"<<rAge<<std::endl;
    
    return 0;
}