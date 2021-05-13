#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve(){
    ll ans = 0;
    string x;
    cin >> x;
    for (auto i : x) ans = (ans * 2 + i - '0') % mod;
    for (ll i = 1; i < x.size(); i++) ans = (ans * 2) % mod;
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