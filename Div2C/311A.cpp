#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, k;
    cin >> n >> k;
    if (n * (n - 1) / 2 <= k) cout << "no solution" << endl;
    else for (ll i = 0; i < n; i++) cout << "0 " << i << endl;
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