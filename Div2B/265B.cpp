#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    ll pos = 0;
    ll result = 2 * n - 1;
    for(ll i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        result += (ll) abs(pos - temp);
        pos = temp;
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