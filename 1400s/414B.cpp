#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int k, n, ans, dp[2001][2001], M = 1e9 + 7, i, j, l;

int main(){
    cin >> n >> k;
    dp[0][1] = 1;
    for(i = 1; i <= k; i++){
        for(j = 1; j <= n; j++){
            for(l = j; l <= n; l += j){
                (dp[i][l] += dp[i - 1][j]) %= M;
            }
        }
    }
    for(i = 1; i <= n; i++)
        (ans += dp[k][i]) %= M;
    cout << ans << endl;
    return 0;
}

 