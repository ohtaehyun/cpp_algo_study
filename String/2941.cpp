#include <iostream>
#include <string>
using namespace std;

int main(){
    string croatia[8] = {"c=", "c-", "dz=", "d-", "lj","nj","s=","z="};
    string s;
    cin >> s;
    int cnt = 0;
    int i = 0;
    while (i < s.length())
    {
        for(int j = 0 ; j < 8; j++){
            string c = croatia[j];
            if(i+c.length() -1 < s.length()){
                string word = s.substr(i,c.length());
                if(word == c){
                    i = i + c.length()-1;
                    break;
                }
            }
        }
        i++;
        cnt++;
    }
    cout << cnt;
}