#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007 

void solve(){
    ll n, m, result = 1;
    cin >> n >> m;
    string arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];
    for(ll i = 0; i < m; i++){
        vector<bool> check(26, false);
        for(ll j = 0; j < n; j++) check[arr[j][i] - 'A'] = true;
        ll count = 0;
        for(ll j = 0; j < 26; j++) count += (ll) check[j];
        result = (result * count) % mod;
    }
    cout << result << endl;
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