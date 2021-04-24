#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    ll ans = 0, x[n], y[n];
    for (ll i = 0; i < n; i++) cin >> x[i] >> y[i];

    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < n; j++){
            ll l = 0, r = 0;
            for (ll k = 0; k < n; k++){
                ll c = (x[j] - x[i]) * (y[k] - y[j]) - (y[j] - y[i]) * (x[k] - x[j]);
                l = min(l, c);
                r = max(r, c);
            }
            if (l < 0 && r > 0) ans = max(ans, r - l);
        }
    }
    cout << fixed << setprecision(10) <<  ans / 2.0 << endl;
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