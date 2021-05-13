#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve(){
    ll n, m, nCr[1001][1001], ans = 1, s[1001], pow[1001];
    cin >> n >> m;
    for (ll i = 0; i <= n; i++){
        for (ll j = 0; j <= i; j++){
            if (j == 0 || j == i) nCr[i][j] = 1;
            else nCr[i][j] = (nCr[i - 1][j - 1] + nCr[i - 1][j]) % mod;
        }
    }
    pow[0] = 1;
    pow[1] = 1;
    for (ll i = 2; i <= n; i++) pow[i] = (pow[i - 1] * 2) % mod;
    for (ll i = 0; i < m; i++) cin >> s[i];
    sort(s, s + m);
    ll tmp = s[0] - 1;
    ll cnt = tmp;
    ans = (ans * nCr[cnt][tmp]) % mod;
    for (ll i = 1; i < m; i++){
        tmp = s[i] - s[i - 1] - 1;
        ans = (ans * pow[tmp]) % mod;
        cnt += tmp;
        ans = (ans * nCr[cnt][tmp]) % mod;
    }
    cnt += n - s[m - 1];
    ans = ans * nCr[cnt][n - s[m - 1]] % mod;
    cout << ans << endl;
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