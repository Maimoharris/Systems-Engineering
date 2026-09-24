#include <iostream>

int main(void){
    struct  Date
    {
        short day,month,year;

    };
    
    Date birthday = {29,02,2000};
    Date event1;
    event1.day = 25, event1.month = 12, event1.year = 1987;

    std::cout<<birthday.day;
    return 0;
}