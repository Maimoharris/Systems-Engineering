#include <iostream>
#include <vector>

std::vector<std::string> split(std::string text){
    int tracker = 0;
    std::vector<std::string> splitted;
    std::string word="";

    size_t str_len = text.size();
    for(int i=0; i<str_len; i++){
        if(text[i]=='+'||text[i]=='-'||text[i]=='*'||text[i]=='/'){
            for(int j=tracker; j<i; j++ ){
                word = word + text[j];
            }
        if(!word.empty()) {
            splitted.push_back(word);
        }
        word = "";
        tracker = i;
        }
    }
    for(size_t j = tracker; j < str_len; j++){
        word = word + text[j];
    }
    if(!word.empty()) {
        splitted.push_back(word);
    }
    return splitted;
    }




int main(void){
    std::vector<std::string> math_space = split("+2+3-2*8/2");
    int result = 0;
    for(std::string i:math_space){
        std::cout<<i<<std::endl;
        int math_out = std::stod(i);
        //result = (math_out)(result);
    }
    std::cout<<result;


    // std::string str_num = "+33";
    // int num = std::stod(str_num);
    // std::cout<<num+3;
    return 0;
}