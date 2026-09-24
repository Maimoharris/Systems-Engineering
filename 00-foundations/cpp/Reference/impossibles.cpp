#include <iostream>
// Things you can not do with references
int main(void){
    int age = 34;
    int &rAge = age;
    int &&rrAge =rAge; // you can not reference a reference
    std::cout<<"original:"<<age<<" Reference:"<<rAge<<" Reference to Refernce:"<<rrAge<<std::endl;


    int sum = &ref+4; // you can not do maths on a reference
    int &sum = age+2; // Not Possible

    int age2 = 23;

    &rAge = age2; // you can not change a variablr reference by a reference

    int &rrrAge = NULL //refernce can not br NULL
    int &reAge;// NULL as well not possible


    return 0;
}