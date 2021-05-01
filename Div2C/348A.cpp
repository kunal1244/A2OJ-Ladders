#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, sum = 0, max_val = 0;
    cin >> n;
    for (ll i = 0; i < n; i++) {ll temp; cin >> temp, max_val = max(temp, max_val), sum += temp;}
    cout << max(max_val, (sum - 1) / (n - 1) + 1);
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