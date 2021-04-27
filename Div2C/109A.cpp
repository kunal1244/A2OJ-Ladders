#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, aval = 10000000, bval = 10000000;
    cin >> n;
    for(ll a = 0; a <= n / 4; a++){
        ll b = (n - 4 * a) / 7;
        if(!((n - 4 * a) % 7) && (a + b < aval + bval)) aval = a, bval = b; 
    }
    if(aval == 10000000 && bval == 10000000) {cout << -1 << endl; return;}
    for(ll i = 0; i < aval; i++) cout << 4;
    for(ll i = 0; i < bval; i++) cout << 7;
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