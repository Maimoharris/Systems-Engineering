#include <iostream>
#include <vector>

std::vector<std::string> hInput(std::string input){
    std::vector<std::string> vector_value;
    int i = 0;
    std::string main_string;
    if(input[0]=='-'){
        std::string base_case = "-"+std::string(1,input[1]);
        vector_value.push_back(base_case);
        i = 2;
    }else{
        vector_value.push_back(std::string(1,+input[0]));
        i = 1;
    }

    while(i<input.size()){
    //for(int i=base_count; i<input.size(); i++)
        if(input[i]=='-'||input[i]=='*'||input[i]=='+'||input[i]=='/'){
            main_string.clear();
            vector_value.push_back(std::string(1,input[i]));
            std::string look_ahead;
                switch (input[i+1]) 
                {
                    case('+'):
                        look_ahead = input[i+1] + input[i+2];
                        vector_value.push_back(look_ahead);
                        i=i+3;
                        break;
                    case('-'):
                        look_ahead = std::string(1,input[i+1]) +  std::string(1,input[i+2]);
                        vector_value.push_back(look_ahead);
                        i=i+3;
                        break;
                default:
                    //vector_value.push_back(std::string(1,input[i+1]));
                    i = i+1;
                    break;
            }
        }else{
            main_string+=std::to_string(input[i]);
            vector_value.push_back(main_string);
            i++;
        }
    }

    return vector_value;
}

auto calculate(const std::vector<std::string> &iVector){
    double final_answer=stod(iVector[0]);
    for(int i=1; i<iVector.size(); i++){
        if(iVector[i]=="+"){
            double digit = stod(iVector[i+1]);
            final_answer +=  digit;
        }else if(iVector[i]=="-"){
            double digit = stod(iVector[i+1]);
            final_answer -=  digit;
        }else if(iVector[i]=="*"){
            double digit = stod(iVector[i+1]);
            final_answer *=  digit;
        }else if(iVector[i]=="/"){
            double digit = stod(iVector[i+1]);
            if(digit!=0){final_answer +=  digit;}else{}
        }
        }

    return final_answer;
}

int main(void){
    
    std::vector<std::string> final_vector = hInput("-2+2+90");
    for(std::string &i:final_vector){
        std::cout<<i<<std::endl;
    }
    double final_answer = calculate(final_vector);


    std::cout<<"Answer:"<<final_answer<<std::endl;
    return 0;
}