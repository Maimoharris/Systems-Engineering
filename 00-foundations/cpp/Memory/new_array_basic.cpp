#include <iostream>
// Here we are going to see how we can create Dynamic Arrays with pointers
/*The new[ ] operator is available for creating dynamic arrays. When you call the opera-
tor, you must supply the type and quantity of the array elements.*/

//Syntax: vekPtr = new Type[cnt];

/*The pointer vekPtr will then reference the first of a total of cnt array elements.
vekPtr has to be a pointer to Type for this reason. Of course, Type can also be a class.
Example: Account *pk = new Account[256];
This statement allocates memory for 256 Account type objects and uses the default con-
structor to initialize them. Those objects are
pk[0],
pk[1],
. . . , pk[255],
or in pointer notation:
*pk, *(pk + 1), ....., *(pk + 255).*/


int main(void){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int step = 10;
    size_t size = sizeof(array)/sizeof(array[1]);
    int* pArray = new int[size+step];
    for(int i:array){
        *(pArray+i) = array[i];
    }

    int val=11;

    for(int i=step; i<size+step-1;i++){
        *(pArray+i) = val;
        val++;
    }

    for(int i=0; i<size+step; i++){
        std::cout<<*(pArray+i)<<std::endl;
    }

    delete[] pArray;
    //delete[] array; You can not delete a staticaly defined array.
    
    return 0;
}

/*
It is always a good idea to release the memory space occupied by a dynamic array, if the
array is no longer needed. To do so, simply call the delete[] operator. The braces []
tell the compiler to release the whole array, and not just a single array element.*/