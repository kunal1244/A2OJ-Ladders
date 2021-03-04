#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m;
    cin >> n >> m;
    set<ll> s;
    for(ll i = 0; i < n; i++) s.insert(i + 1);
    for(ll i = 0; i < m; i++){
        ll temp;
        cin >> temp;
        s.erase(temp);
        cin >> temp;
        s.erase(temp);
    }
    if(!s.size()) {cout << 0 << endl; return ;}
    ll root = *s.begin();
    cout << n - 1 << endl;
    for(ll i = 1; i <= n; i++){
        if(i != root) cout << root << " " << i << endl; 
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