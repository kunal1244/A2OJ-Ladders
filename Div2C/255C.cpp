#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll dp[5010][5010], ans = 0, n;
    cin >> n;
    ll arr[n + 1];
    arr[0] = 0;
    for (ll i = 1; i <= n; i++) cin >> arr[i];
    for (ll i = 1; i <= n; i++){
        for (ll j = 0, tt = 0; j < i; j++){
            dp[j][i] = dp[tt][j] + 1;
            if (arr[j] == arr[i]) tt = j;
            ans = max(ans, dp[j][i]);
        }
    }
    cout << ans << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}