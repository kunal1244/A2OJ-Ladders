#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << fixed << setprecision(8) << a * d * 1.0 / (d * b - (b - a) * (d - c)) << endl;
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