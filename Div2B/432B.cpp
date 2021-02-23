#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> res(n, {n - 1,n - 1});
    vector<pair<ll, ll>> arr(n);
    map<ll, ll> mp;
    for(ll i = 0; i < n; i++){
        ll x, y;
        cin >> x >> y;
        arr[i] = {x, y};
        mp[x]++;
    }
    for(ll i = 0; i < n; i++){
        res[i].first += mp[arr[i].second];
        res[i].second -= mp[arr[i].second];
        cout << res[i].first << " " << res[i].second << endl;
    }
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