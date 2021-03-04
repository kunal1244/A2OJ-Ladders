#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, k;
    cin >> n >> k;
    if(n == k) {cout << -1 << endl; return ;}
    cout << n - k << " ";
    for(ll i = 1; i <= n; i++){
        if(i != n - k) cout << i << " ";
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