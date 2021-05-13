#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define MOD 1000000007;
ll C[18000][501];
map<ll, ll> mp;

void factorize(ll n){
    for (ll i = 2; i * i <= n; i++) while (n % i == 0) mp[i]++, n /= i;
    if (n > 1) mp[n]++;
}

void solve(){
    for (ll i = 0; i < 18000; i++){
        for (ll j = 0; j <= min(i, 500LL); j++){
            if (j == 0 || j == i) C[i][j] = 1;
            else C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
        }
    }
    ll n, x, ans = 1;
    cin >> n;
    for (ll i = 0; i < n; i++){
        cin >> x;
        factorize(x);
    }
    for (auto m : mp){
        ans *= C[m.second + n - 1][n - 1];
        ans %= MOD;
    }
    cout << ans;
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