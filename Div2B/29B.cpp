#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll l, d, v, g, r;
    cin >> l >> d >> v >> g >> r;
    ll init_time = d / v;
    cout << fixed << setprecision(7);
    if(init_time % (g + r) >= g) cout << (init_time / (g + r) + 1) * (g + r) + (l - d) * 1.0 / v << endl; 
    else cout << l * 1.0 / v << endl;
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