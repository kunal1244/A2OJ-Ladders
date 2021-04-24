#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, x0, lval = 0, rval = INT_MAX;
    cin >> n >> x0;
    for (ll i = 0; i < n; i++){
        ll a, b;
        cin >> a >> b;
        if (a > b) swap(a, b);
        lval = max(lval, a);
        rval = min(rval, b);
    }

    if(lval > rval) cout << -1 << endl;
    else if(lval <= x0 && rval >= x0) cout << 0 << endl;
    else if(lval > x0) cout << lval - x0 << endl;
    else cout << x0 - rval << endl;
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