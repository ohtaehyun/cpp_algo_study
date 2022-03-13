#include<iostream>
using namespace std;

int main(){
    int count;
    cin >> count;
    string inputStr;
    cin >> inputStr;
    int sum = 0;
    for (int i = 0; i < count; i++){
        sum += (int)inputStr[i]-48;
    }
    cout << sum;
    return 0;
}
