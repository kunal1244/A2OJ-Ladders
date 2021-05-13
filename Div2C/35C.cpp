#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll trees[11][2];
    ll n, m, k, x = 1, y = 1, res = 0;
    cin >> n >> m >> k;
    for (ll i = 0; i < k; i++) cin >> trees[i][0] >> trees[i][1];
    for (ll i = 1; i <= n; i++){
        for (ll j = 1; j <= m; j++){
            ll maxVal = INT_MAX;
            for (ll l = 0; l < k; l++) maxVal = min(maxVal, abs(i - trees[l][0]) + abs(j - trees[l][1]));
            if (res < maxVal) res = maxVal, x = i, y = j;
        }
    }
    cout << x << " " << y << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    ll flag = 1;
    // cin >> flag;
    while (flag--) solve();
    return 0;
}