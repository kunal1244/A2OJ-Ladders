#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const ll mod = 1e9 + 7;
ll dp[100][2], n, k, d;

ll recsolve(ll sum, ll flag){
    if (sum == n && flag == 1) return 1;
    if (sum > n || (sum == n && flag == 0)) return 0;
    ll ans = 0LL;
    if (dp[sum][flag] != -1) return dp[sum][flag];
    for (ll i = 1; i <= k; ++i){
        if (i < d && flag == 1) ans = (ans + recsolve(sum + i, 1LL)) % mod;
        else if (i < d && flag == 0) ans = (ans + recsolve(sum + i, 0LL)) % mod;
        else if (i >= d) ans = (ans + recsolve(sum + i, 1LL)) % mod;
    }
    dp[sum][flag] = ans % mod;
    return ans % mod;
}

void solve(){
    cin >> n >> k >> d;
    memset(dp, -1, sizeof dp);
    cout << recsolve(0, 0) << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}