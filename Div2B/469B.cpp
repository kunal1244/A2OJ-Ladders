#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll p, q, l, r;
    cin >> p >> q >> l >> r;
    vector<pair<ll, ll>> zvals(p);
    set<int> s;
    for(ll i = 0; i < p; i++){
        cin >> zvals[i].first >> zvals[i].second;
    }
    for(ll i = 0; i < q; i++){
        ll c, d;
        cin >> c >> d;
        for(ll j = 0; j < p; j++){
            ll x = max(l, zvals[j].first - d), y = min(zvals[j].second - c, r);
            for(ll k = x; k <= y; k++) s.insert(k);
        }
    }

    cout << s.size() << endl;
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