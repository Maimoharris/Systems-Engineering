#include <iostream>
#include <vector>

std::vector<std::string> hInput(std::string input){
    std::vector<std::string> vector_value;
    int i = 0;
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
            vector_value.push_back(std::string(1,input[i]));
            std::string look_ahead;
                switch (input[i+1]) 
                {
                    case('+'):
                        look_ahead = std::string(1,input[i+1]) + std::string(1,input[i+2]);
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
            vector_value.push_back(std::string(1,input[i]));
            i++;
        }
    }

    return vector_value;
}
auto calculate(std::vector<std::string> &iVector){
    double result;
    for(int i=1; i<iVector.size();){
        if(iVector[i]=="*"||iVector[i]=="/"){
            double left = stod(iVector[i-1]);
            double right = stod(iVector[i+1]);
            double result;
            
            if(iVector[i]=="*"){
                double result = left * right;
            }else{
                if(right!=0){double result = left / right;}
            }
        iVector[i-1] = std::to_string(result);
        iVector.erase(iVector.begin()+i, iVector.begin()+i+2);

        }else{
            i++;
        }

    }

    for(size_t i=1; i<iVector.size();){
        if(iVector[i]=="-"||iVector[i]=="+"){
            double left = stod(iVector[i-1]);
            double right = stod(iVector[i+1]);
            double result;

            if(iVector[i]=="+"){
                double result = left + right;
            }else{
                double result = left - right;
            }
        iVector[i-1] = std::to_string(result);
        iVector.erase(iVector.begin()+i, iVector.begin()+i+2);

        }else{
            i++;
        }

    }
    return result;
}

int main(void){
    
    std::vector<std::string> final_vector = hInput("4+5");
    for(std::string &i:final_vector){
        std::cout<<i<<std::endl;
    }
    double final_answer = calculate(final_vector);


    std::cout<<"Answer:"<<final_answer<<std::endl;
    return 0;
}