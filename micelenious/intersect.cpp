#include <iostream>
#include <vector>

std::vector<int> Arrayunion(std::vector<int> &array1, std::vector<int> &array2){
    std::vector<int> result;
    size_t array1_size = array1.size();
    size_t array2_size = array2.size();

    int indexer1 = 0;
    int indexer2 = 0;
    while (indexer1<array1_size && indexer2<array2_size)
    {        
        if(array1[indexer1]==array2[indexer2]){
            result.push_back(array1[indexer1]);
            indexer1++, indexer2++;
        }else if(array1[indexer1]<array2[indexer2]){
            indexer1++;
        }else{
            indexer2++;
        }
    }

    return result;
}

int main(void){
    std::vector<int> sons = {1,4,7,12,23,25,36,47,48,51,53,55,57,59,60,61,63};
    std::vector<int> fathers = {1,3,4,5,7,12};
    std::vector<int> answer = Arrayunion(sons,fathers);
    std::cout<<"{";
    for(int &i:answer){
        std::cout<<i<<",";
    }
    std::cout<<"}";
    return 0;
}