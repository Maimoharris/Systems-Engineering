#include <iostream>
// This Algorithm Runs as O(logn(n)) for a sorted Array expecailly as the algorithm grows
bool BinarySearch(int target, int array[], size_t array_size){
    int high = array_size;
    int low = 0;
    int mid = (low+high)/2;

    while (low<=high)
    {
        if(array[mid] == target){
            return true;
        }else if (array[mid] < target)
        {
            low = mid+1;
        }else if(array[mid] > target){
            high = mid-1;
        }
        mid = (low + high) / 2; 
    }
    return false;
}


int main(void){
    int space[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    size_t size = sizeof(space)/sizeof(space[1]);
    auto is_present = BinarySearch(1,space, size);

    if(is_present){
        std::cout<<"The Number is present"<<std::endl;
    }else{
        std::cout<<"The number is not present!!"<<std::endl;
    }
}