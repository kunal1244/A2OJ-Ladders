#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll r, x, y, xp, yp;
    cin >> r >> x >> y >> xp >> yp;

    cout << (ll) ceil(sqrt((x - xp) * (x - xp) + (y - yp) * (y - yp)) / (2 * r)) << endl;
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