#include <iostream>
// Exploring the control i have over the amount of memory i can use for a variable in C++
int main(void){
    // int = int8_t;
    int32_t age = 32;  
    int16_t legs = 2;
    int64_t floors = 50;

    // char8_t Does not exist
    char32_t maths_grade = 'A';
    char16_t physics_grade = 'B';
    // char64_t bilogy_grade = 'B'; not existing
    std::cout<<"sizeof(int32_t):"<<sizeof(age)<<std::endl;
    std::cout<<"sizeof(int16_t):"<<sizeof(legs)<<std::endl;
    std::cout<<"sizeof(int64_t):"<<sizeof(floors)<<std::endl;

    std::cout<<"sizeof(char32_t):"<<sizeof(maths_grade)<<std::endl;
    std::cout<<"sizeof(char16_t):"<<sizeof(physics_grade)<<std::endl;



}