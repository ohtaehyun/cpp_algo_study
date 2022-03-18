#include <iostream>
using namespace std;
int main(){
    int cnt;
    cin >> cnt;
    int gCnt = 0;
    for(int i = 0 ; i < cnt ; i ++){
        int arr[26] = {};
        string s;
        cin >> s;
        for(int j = 0 ; j + 1 < s.length() ; j++){
            arr[(int)s[j] - 'a'] = 1;
            if(s[j+1] != s[j] && arr[(int)s[j+1]-'a'] != 0 ){
                break;
            }
            if(j+1 == s.length()-1 ){
                gCnt++;
            }
        }
        if(s.length() == 1){
            gCnt++;
        }
    }
    cout <<gCnt;
}