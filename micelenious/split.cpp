#include <iostream>
#include <vector>
int main(int argc, const char** argv) {

    std::string text = "Apple,Banana,Pea,Carrot";
    int tracker = 0;
    std::vector<std::string> splitted;
    std::string word;

    size_t str_len = text.size();
    for(int i=0; i<str_len; i++){
        if(text[i]==','){
            for(int j=tracker; j<i; j++ ){
                word = word + text[j];
            }

        splitted.push_back(word);
        word = " ";
        tracker = i+1;
        }
    }
    for(size_t j = tracker; j < str_len; j++){
        word = word + text[j];
    }
    splitted.push_back(word);


    for(std::string i : splitted ){
        std::cout<<i<<" ";
    }
    return 0;
}