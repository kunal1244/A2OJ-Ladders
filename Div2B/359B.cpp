#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, k;
    cin >> n >> k;
    for(ll i = 1; i <= k; i++){
        cout << 2 * i << " " << 2 * i - 1 << " ";
    }
    for(ll i = k + 1; i <= n; i++){
        cout << 2 * i - 1 << " " << 2 * i << " ";
    }
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