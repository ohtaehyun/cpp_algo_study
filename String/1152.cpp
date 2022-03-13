#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string s,char delimiter){
    istringstream iss(s);
    string buffer;
    vector<string> result;
    while(getline(iss,buffer,delimiter)){
        result.push_back(buffer);
    }
    return result;
}
string trim(string s){
    const char *t = " \t\n\r\f\v";
    s.erase(0,s.find_first_not_of(t));
    s.erase(s.find_last_not_of(t)+1);
    return s;
}

int main(){
    string s;
    getline(cin,s);
    s = trim(s);
    vector<string> splited = split(trim(s),' ');
    cout << splited.size();
    return 0;
}