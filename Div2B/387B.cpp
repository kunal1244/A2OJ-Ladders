#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> req(n), avail(m);
    for(ll i = 0; i < n; i++) cin >> req[i];
    for(ll i = 0; i < m; i++) cin >> avail[i];
    ll i = 0, j = 0;
    while(i < n && j < m){
        if(req[i] <= avail[j]) {i++; j++;}
        else j++;
    }
    cout << n - i << endl;
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