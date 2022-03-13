#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int arr[26] = {-1};
    memset(arr,-1,sizeof(int)*26);
    string word;
    cin >> word;
    for(int i = 0 ; i < word.length(); i++){
        int idx = (int) word[i] - 'a';
        if(arr[idx] == -1){
            arr[idx] = i;
        }
    }
    for(int i = 0; i < 26; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}