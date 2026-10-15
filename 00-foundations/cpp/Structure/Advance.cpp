#include <iostream>
//Struct can have public and private memebers, and also member functions.

struct Configuration{
    private:
        std::string ip_address;
        int port;
        bool is_local;
        bool is_on = true;
    public:
        Configuration(std::string ip, int p, bool local){
            ip_address = ip;
            port = p;
            is_local = local;
        }

        bool reboot(){
            is_on =false;
            //delay(10);
            is_on = true;
            return true;
        }

        void changeIP(std::string new_ip){
            ip_address = new_ip;
        }

};

int main(void){
    Configuration mainServer("192.168.1.54",22,true);
    mainServer.reboot();
    mainServer.changeIP("192.48.12.54");
    return 0;
}