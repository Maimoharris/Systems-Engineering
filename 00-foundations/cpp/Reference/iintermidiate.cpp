#include <iostream>
#include <vector>

void swap(int &int1, int &int2){
    int temp = int1;
    int1 = int2;
    int2 = temp;
}

void printMessage(const std::string &Msg){
    std::cout<<Msg<<std::endl;
}

void printLargeObject(const std::vector<std::string> &data){
    for (const auto item: data){
        std::cout<<item<<" ";
    }
}
int main(void){
    int num1 = 10;
    int num2 = 1100;
    std::string message = "I am ....";
    std::vector names = {"James","Mary"};
    swap(num1, num2); // This function directly access memory location of num1 and num2 and not create a copy as a normal function would do
    printMessage(message); // a copy of the message is not made, and the message can not be changed
    printLargeObject({"James","Mary"});

    return 0;
}