#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string n, m;
    vector<ll> avail(26, 0), req(26, 0);
    cin >> n >> m;
    for(ll i = 0; i < n.size(); i++) avail[n[i] - 'a']++;
    for(ll i = 0; i < m.size(); i++) req[m[i] - 'a']++;
    ll res = 0;
    for(ll i = 0; i < 26; i++){
        if(req[i] && !avail[i]) {cout << -1 << endl; return ;}
        else res += min(req[i], avail[i]);
    }
    cout << res << endl;
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