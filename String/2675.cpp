#include <iostream>
#include <string>

using namespace std;

int main(){
    int count;
    cin >> count;
    for(int i = 0; i < count; i++){
        int repeat;
        string str;
        string result = "";
        cin >> repeat;
        cin >> str;
        for(int i = 0; i < str.length(); i++){
            result += string(repeat,str[i]);
        }
        cout << result<< endl;
    }
    return 0;
}