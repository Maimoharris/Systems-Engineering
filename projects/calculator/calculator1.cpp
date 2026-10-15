#include <iostream>
#include <sstream>
#include <string>
#include <vector>


int main(void){
    std::string input;
    std::cout<<">";
    std::getline(std::cin,input);   
    std::vector<int> values;
    std::vector<char> operators;
    int result = values[0];

    if(input[0]=='-'){
        int result = -values[0];
        input[0]=' ';
    }

    for(char &c : input){
        if(c =='+'||c=='/'||c=='*'||c=='-'){
            operators.push_back(c);
            //std::cout<<c;
            c = ' ';
        }
    }
    //std::cout<<operators.size();

    std::stringstream clean_input(input);
    int token;
    while (clean_input>>token){
        std::cout<<token<<"\n";
        values.push_back(token);
    }
    
    for(int i=1; i<values.size(); i++){
        switch (operators[i-1])
        {
            case '+':
                result+=values[i];
                break;
            case '-':
                result+=values[i];
                break;
            case '*':
                result*=values[i];
                break;
            case '/':
                result/=values[i];
                break;
            
            default:
                std::cout<<"\n[+] Error: Invalid Operator!!";
                break;
        }
    }

    std::cout<<"= "<<result;
    return 0;
}