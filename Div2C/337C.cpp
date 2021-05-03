#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define mod 1000000009
 
ll resmod(ll a, ll b){
    if (!b) return 1;
    ll res = resmod(a, b / 2);
    res = (res * res) % mod;
    if (b % 2) res = (res * a) % mod;
    return res;
}

void solve(){
    ll n, m, k, x;
    cin >> n >> m >> k;
    x = max(0LL, m - (n / k * (k - 1) + n % k));
    cout << (((resmod(2, x + 1) - 2) * k) % mod + m - x * k + mod) % mod;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    ll flag = 1;
    // cin >> flag;
    while(flag--){
        solve();
    }
    return 0;
}