#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void solve(){
    ll x, y, n, a = 0, b = 1;
    cin >> x >> y >> n;
    ld m = INT_MAX;
    for (ll i = 1; i <= n; i++){
        ll val = (x * i) / y;
        ld f = abs(x * i - val * y), j = abs(x * i - (val + 1) * y);
        if (f > j){
            val++;
            f = j;
        }
        f /= (y * i);
        if (f < m){
            a = val;
            b = i;
            m = f;
        }
    }
    cout << a << "/" << b << endl;
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