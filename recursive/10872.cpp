#include <iostream>
using namespace std;

int facto(int n){
    if(n > 1){
        return n * facto(n-1);
    }
    else {
        return 1;
    }
}

int main(){
    int n;
    cin >> n;
    int result = facto(n);
    cout << result;
}