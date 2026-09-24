#include <iostream>


template <typename T, size_t size>

class Array{
    private:
        T array[size];
    public:
        constexpr int Size() {return size;}
        T& operator[](int index){ return array[index];}

        const T& operator[](int index)const{return array[index];}

        //T* Data(){return array;}

        void Swap(int index1, int index2){
            T temp = array[index1];
            array[index1] = array[index2];
            array[index2] = temp;
        }

        void Insert(int index=size, const T value=""){
            for (int i = size; i >= index; i--)
            {
                array[i] = array[i-1];
            }
            array[index] = value;
        }

        void Delete(int index=size){
            for(int i = index+1; i<size; i++){
                array[i] = array[i+1];
            }
        }
        void Display(){
            std::cout<<"[";
            for (size_t i = 0; i < size; i++)
            {
                std::cout<<array[i]<<",";
            }
            std::cout << "]" << std::endl;
        }
};

int main(void){
    size_t test = 34;
    Array<std::string,5> data;
    data[0] = "vlad";
    data[1] = "name";
    data[2] = "molly";

    //Before swap //Before Insert //Before Delete
    
    data.Display();

    data.Swap(0,1);
    data.Insert(1,"drac");
    data.Delete();
    //After Insert //After Delete  //After swap
    data.Display();
}