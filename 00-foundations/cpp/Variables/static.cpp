#include <iostream>

int job(){
    static int count = 0;// static makes the value of a variable to be same for all function calls. so there is only one variable for all function calls no copy is created
    count++;
    return count;
}
int main(void){
    job(); 
    job();
    job();
    std::cout<<job()<<std::endl;
    return 0;
}