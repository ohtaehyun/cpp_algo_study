#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int arr[26] = {};
    for(int i = 0; i < s.length(); i++){
        arr[tolower(s[i])-'a'] += 1;
    }
    int max = 0;
    int maxIdx = 0;
    bool isDup = false;

    for(int i = 0; i < 26; i++){
        if(arr[i] == max && max > 0){
            isDup = true;
        }
        if(arr[i] > max){
            max = arr[i];
            maxIdx = i;
            isDup = false;
        }
    }
    if (isDup)
    {
        cout << "?";
        return 0;
    }
    cout << (char)(toupper(maxIdx + 'A'));
}