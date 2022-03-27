#include <iostream>
using namespace std;

int main(){
    int n,goal;
    scanf ("%d %d",&n,&goal);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int max = 0;
    for(int i = 0; i < n -2;i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                int sum = arr[i] + arr[j] +arr[k];
                if(sum<= goal && sum> max){
                    max = sum;
                }
            }
        }
    }
    printf("%d",max);
}