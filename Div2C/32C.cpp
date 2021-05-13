#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m, s;
    cin >> n >> m >> s;
    cout << (1 + (n - 1) % s) * (1 + (n - 1) / s) * (1 + (m - 1) % s) * (1 + (m - 1) / s);
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