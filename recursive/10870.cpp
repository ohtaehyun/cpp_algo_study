#include <iostream>
using namespace std;

int fibo(int n){
    if(n>2){
        return fibo(n-2) + fibo(n-1);
    }
    else if(n>0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cin >> n;
    cout << fibo(n);
}