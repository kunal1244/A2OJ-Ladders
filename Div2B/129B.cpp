#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> mp(n);
    for(ll i = 0; i < m; i++){
        ll t1, t2;
        cin >> t1 >> t2;
        mp[t1 - 1].push_back(t2 - 1);
        mp[t2 - 1].push_back(t1 - 1);
    }

    ll groups = 0;

    while(true){
        ll flag = false;

        vector<pair<ll, ll>> arr;
        for(ll i = 0; i < n; i++){
            if(mp[i].size() == 1){
                flag = true;
                arr.push_back({mp[i][0], i});
                mp[i].clear();
            }
        }
        
        for(ll i = 0; i < arr.size(); i++){
            ll j = 0;
            for(ll j = 0; j < mp[arr[i].first].size(); j++){
                if(mp[arr[i].first][j] == arr[i].second) {mp[arr[i].first].erase(mp[arr[i].first].begin() + j); break;}
            }
        }
        if(!flag) break;
        else groups++;
    }

    cout << groups << endl;
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