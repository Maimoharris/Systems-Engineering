#include <iostream>
#include <sstream>



int main(void){
    std::string input;
    std::getline(std::cin,input);
    std::stringstream ss(input);

    while (ss.good())
    {
        std::string token;
        ss>>token;

        std::cout<<token<<"\n";
    }
    

    return 0;
}