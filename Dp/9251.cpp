#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
    int dp[1001][1001];
    string str1;
    string str2;

    getline(cin,str1);
    getline(cin,str2);
    for (size_t i = 1; i <= str1.size(); i++)
    {
        for (size_t j = 1; j <= str2.size(); j++)
        {
            if(str1[i-1] == str2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max({dp[i][j-1],dp[i-1][j]});
            }
        }
    }
    cout << dp[str1.size()][str2.size()] << endl;
}