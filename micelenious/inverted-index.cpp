#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cctype>

struct doc_data{
    int docID;
    std::vector<std::string> word;
};
// std::string Intersect(std::vector<std::string> vec1,std::vector<std::string> vec2,std::vector<std::string> vec3,std::vector<std::string> vec4){
// }
int main(void){
    std::map<int,std::string> doc;
    doc[1] = "Bamenda city council approves new market";
    doc[2] = "New road links Bamenda and Bambili";
    doc[3] = "Bambili students visit city market";
    doc[4] = "Council budget for new road approved";

    std::map<int, doc_data> index_data;
    size_t count = 0;
    for(auto& [docID,text] : doc){
        std::stringstream ss(text);
        std::string token;
        while (ss>>token)
        {
            std::transform(token.begin(), token.end(), token.begin(), [](unsigned char c) {
                return std::tolower(c);
            });

            index_data[count] = {docID,{token}};
            count++;
        }
    }

    for(auto& [key,words] : index_data){
        std::cout<<words.docID<<": ";
        for(std::string& str : words.word){
            std::cout<<str;
        }std::cout<<"\n";
    }

    return 0;
}