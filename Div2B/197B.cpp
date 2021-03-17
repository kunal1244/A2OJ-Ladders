#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a, b;
    cin >> a;
    for(ll i = 0; i < n; i++) {ll temp; cin >> temp;}
    cin >> b;
    for(ll i = 0; i < m; i++) {ll temp; cin >> temp;}
    if(n < m) cout << "0/1" << endl;
    else if(n > m){
        if(a * b < 0) cout << "-Infinity" << endl;
        else cout << "Infinity" << endl;
    }
    else{
        ll val = __gcd(abs(a), abs(b));
        if(a * b < 0) cout << "-";
        cout << abs(a) / val << "/" << abs(b) / val << endl;
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