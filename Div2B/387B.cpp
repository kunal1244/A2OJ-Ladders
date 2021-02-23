#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m;
    cin >> n >> m;
    set<ll> s;
    for(ll i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        s.insert(temp);
    }
    for(ll i = 0; i < m; i++){
        ll temp;
        cin >> temp;
        if(s.count(temp)) s.erase(temp);
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