#include <iostream>
#include <cmath>
using namespace std;

int arr[6561][6561];

void repeat(int n){
    if(n > 3){
        int sn = n/3;
        repeat(sn);
        for(int i = 0; i<sn;i++){
            for(int j = 0; j<sn; j++){
                arr[i][j+sn] = arr[i][j];
                arr[i][j+sn*2] = arr[i][j];
                arr[i+sn][j] = arr[i][j];
                arr[i+sn][j+sn*2] = arr[i][j];
                arr[i+sn*2][j] = arr[i][j];
                arr[i+sn*2][j+sn] = arr[i][j];
                arr[i+sn*2][j+sn*2] = arr[i][j];
            }
        }
    }
}

int main(){

    arr[0][0] = 1;
    arr[0][1] = 1;
    arr[0][2] = 1;
    arr[1][0] = 1;
    arr[1][1] = 0;
    arr[1][2] = 1;
    arr[2][0] = 1;
    arr[2][1] = 1;
    arr[2][2] = 1;
    int n;
    cin >> n;
    repeat(n);
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n; j++){
            if(arr[i][j] == 1){
                cout << '*';
            }
            else{
                cout << ' ';
            }
        }
        cout << endl;
    }
}