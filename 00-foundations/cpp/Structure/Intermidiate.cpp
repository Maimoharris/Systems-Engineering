#include <iostream>

struct Location{
    std::string city;
    std::string country;
};

struct Configuration{
    std::string ip_address;
    int port;
    bool is_local;
    Location server_location;  //Struct Nesting here.
};


int main(void){

    Configuration server1 = {"192.168.1.50", 22, true, {"Bamenda","Cameroon"}};
    std::cout<<"The Server:"<<server1.ip_address<<" is located at "<<server1.server_location.city<<","<<server1.server_location.country;
    return 0;
}