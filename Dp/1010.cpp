#include <iostream>
using namespace std;
int main(){
    int dp[31][31];

    for(int i = 1; i < 31; i++){
        dp[1][i] = i;
    }

    for(int i = 2; i < 31; i ++){
        for(int j = i; j < 31; j++){
            int sum = 0;
            for(int k = i-1; k < j ;k++){
                sum += dp[i-1][k];
            }
            dp[i][j] = sum;
        }
    }


    int round; 
    cin >> round;
    for (size_t i = 0; i < round; i++)
    {
        int n,m; 
        scanf("%d %d",&n,&m);
        cout << dp[n][m] << endl;
    }
    
}