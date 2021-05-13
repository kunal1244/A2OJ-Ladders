#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    map<pair<ll, ll>, ll> mp;
    ll ans, x = 0, y = 0, x1, y1, x2, y2;
    for (ll i = 0; i < 4; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        x += (x1 == x2 && y1 != y2);
        y += (x1 != x2 && y1 == y2);
        mp[{x1, y1}]++;
        mp[{x2, y2}]++;
    }
    ans = (x == 2 && y == 2);
    for (auto i : mp) ans &= (i.second == 2);
    cout << (ans == 1 ? "YES" : "NO") << endl;
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