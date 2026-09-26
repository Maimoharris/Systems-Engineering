#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;



string timeConversion(string s) {
    bool is_pm = false; 
    vector<int> array_time;
    for(char &i:s){
        if(i==':'){
            i=' ';
        }
        if(i=='P'){
            i=' ';
            is_pm = true;
        }if(i=='M'||i=='A'){
            i=' ';
        }
    }
    stringstream ss(s);
    string token;

    while(ss >> token){
        int digit = stoi(token);
        array_time.push_back(digit);
    }
    
    if(is_pm && array_time[0] != 12){
        array_time[0] = array_time[0] + 12;
    } else if(!is_pm && array_time[0] == 12){ 
        array_time[0] = 0;
    }

    string hour = to_string(array_time[0]);
    string min = to_string(array_time[1]);
    string rat = to_string(array_time[2]);
    
    if(hour.length() < 2)  hour = "0" + hour;
    if(min.length() < 2)   min = "0" + min;
    if(rat.length() < 2)   rat = "0" + rat;
    
    return hour + ":" + min + ":" + rat;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
