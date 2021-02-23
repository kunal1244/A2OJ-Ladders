#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll d, t, lower = 0, upper = 0;
    cin >> d >> t;
    vector<pair<pair<ll, ll>, ll>> mp(d);
    for(ll i = 0; i < d; i++){
        ll temp1, temp2;
        cin >> temp1 >> temp2;
        mp[i] = {{temp1, temp2}, temp1};
        lower += temp1;
        upper += temp2;
    }
    if(lower > t || upper < t) {cout << "NO" << endl; return ;}
    cout << "YES" << endl;

    ll to_fill = t - lower;
    for(ll i = 0; i < d; ++i){
        // cout << mp[i].first.second << " " << mp[i].first.first << endl;
        if(mp[i].first.second - mp[i].first.first <= to_fill) {
            // cout << "r1" << endl;
            mp[i].second = mp[i].first.second; 
            to_fill -= mp[i].first.second - mp[i].first.first;
        }
        else{
            mp[i].second += to_fill;
            to_fill = 0;
        }
        cout << mp[i].second << " ";
    }
    cout << endl;


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