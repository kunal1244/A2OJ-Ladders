#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    a *= d;
    b *= c;
    ll hcf = __gcd(a, b);
    cout << abs(a - b) / hcf << "/" << (a > b ? a / hcf : b / hcf) << endl;
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