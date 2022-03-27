#include <iostream>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        string s = to_string(i);
        int sum = i;
        for(int j = 0; j < s.length(); j++){
            sum += s[j]-'0';
        }
        if(sum == n){
            cout << i;
            return 0;
        }
    }
    cout <<0;
}