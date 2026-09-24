#include <iostream>
// Nevermind here am just confused trying things out to understand size_t more
// i was just thinking if size_t could be assigned dynamically at runtime (bigginer sniffing around)
class Avatar{
    private:
        std::string name;
        int health = 100;
    public:
        void seter(std::string AvaterName, int AvaterHeath){
            name = AvaterName;
            health = AvaterHeath;
        }
        
        int getter(void);
        size_t getsize(void);
};

int Avatar::getter(void){
    std::cout<<"Name:"<<name<<std::endl;
    std::cout<<"Health: "<<health<<std::endl;

    return 0;
} 

size_t Avatar::getsize(void){
    return sizeof(getter());
}

int main(void){
    Avatar man1;
    size_t size = man1.getsize();

    std::cout<<"Size of getter is:"<<size<<std::endl;
}