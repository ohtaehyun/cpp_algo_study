#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string n1;
    string n2;
    cin >> n1;
    cin >> n2;
    reverse(n1.begin(),n1.end());
    reverse(n2.begin(),n2.end());

    int i1 = stoi(n1);
    int i2 = stoi(n2);

    if(i1>i2){
        cout << i1;
    }
    else{
        cout << i2;
    }
}