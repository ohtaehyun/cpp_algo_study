#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int round;
    cin >> round;
    for (size_t i = 0; i < round; i++)
    {
        int cols;
        cin >> cols;
        int stickers[2][100000];
        int row = 0;
        while(row < 2){
            for (size_t j = 0; j < cols; j++)
            {
                cin >> stickers[row][j];
            }
            row++;
        }
        int dp[2][100001] = {};
        dp[0][1] = stickers[0][0];
        dp[1][1] = stickers[1][0];

        int start = 2;
        while(start <= cols){
            dp[0][start] = max({dp[1][start-2],dp[1][start-1]}) + stickers[0][start-1];
            dp[1][start] = max({dp[0][start-2],dp[0][start-1]}) + stickers[1][start-1];
            start++;
        }
        cout << max({dp[0][cols],dp[1][cols]}) << endl;
    }
}