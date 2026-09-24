#include <iostream>
#include <sstream>
#include <string>
#include <vector>


int main(void){
    std::string input;
    std::cout<<">";
    std::getline(std::cin,input);   
    std::vector<float> values;
    std::vector<char> operators;
    for(char &c : input){
        if(c =='+'||c=='/'||c=='*'||c=='-'){
            operators.push_back(c);
            //std::cout<<c;
            c = ' ';
        }
    }
    //std::cout<<operators.size();

    std::stringstream clean_input(input);
    float token;
    while (clean_input>>token)
    {
       // std::cout<<token<<"\n";
        values.push_back(token);
    }
    values.push_back(0);
    double result = values[0];
    for(int i=0; i<operators.size();i++){
        switch (operators[i])
        {
            case '+':
                result+=values[i+1];
                break;
            case '-':
                result+=values[i+1];
                break;
            case '*':
                result*=values[i+1];
                break;
            case '/':
                try
                {
                    result/=values[i+1];
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                }
                
                break;
            
            default:
                std::cout<<"\n[+] Error: Invalid Operator!!";
                break;
        }
    }

    std::cout<<"= "<<result;
    return 0;
}