#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll arr[5005], dp[5005][5005];
int main(){
    ll n, m, k;
    cin >> n >> m >> k;
    arr[0] = 0;
    for(ll i = 1; i <= n; i++){
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    for(ll i = 1; i <= k; i++){
        for(ll j = m; j <= n; j++){
            dp[i][j] = max(dp[i][j - 1], dp[i - 1][j - m] + arr[j] - arr[j - m]);
        }
    }
    cout << dp[k][n] << endl;

    return 0;
}