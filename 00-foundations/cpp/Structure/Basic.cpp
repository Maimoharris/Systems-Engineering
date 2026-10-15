#include <iostream>

struct Configuration{
    std::string ip_address;
    int port;
    bool is_local;
};
 struct Location{
    std::string city;
    std::string country;
 }loc1,loc2;


void CheckServer(Configuration& mainServer){
    mainServer.ip_address = "192.164.67.1";
    mainServer.port = 22;
    mainServer.is_local = true;
    }

void CheckServer(Configuration* mainServer){
    mainServer->ip_address = "192.164.67.1";
    mainServer->port = 22;
    mainServer->is_local = true;
}

int main(void){
    Configuration server1;
    Configuration server2;

    server1.ip_address = "10.10.0.8";
    server1.port = 22;
    server1.is_local = true;

    server2 = {"187.25.14.56", 22, false};

    loc1 = {"Bamenda","Cameroon"};
    loc2 = {"Yaounde","Cameroon"};

    // Main use case of struct is to pass them as function params (reference or pointer for memory optimization)
   
    }