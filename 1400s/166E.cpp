#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD (ll) (1e9 + 7)

int main(){
    ll n;
    cin >> n;
    ll zD = 1;
    ll zABC = 0;
    for (ll i = 1; i <= n; i++) {
        ll nzD = (zABC * 3LL) % MOD;
        ll nzABC = (zABC * 2LL + zD) % MOD;
        zD = nzD;
        zABC = nzABC;
    }
    cout << zD << endl;
}