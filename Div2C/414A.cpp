#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n, k;
    cin >> n >> k;
    if(k < n / 2 || (k && n == 1)) {cout << -1 << endl; return ;}
    ll reqval = k + 1 - n / 2;
    if(n == 1) {cout << 1 << endl; return ;}  
    cout << reqval << " " << reqval * 2 << " ";
    ll val = 1;
    for(ll i = 0; i < n - 2; val++){
        if(val != reqval && val != reqval * 2) i++, cout << val << " ";
    }
    cout << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}