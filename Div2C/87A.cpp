#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll a, b;
    cin >> a >> b;
    ll g = __gcd(a, b);
    a = a / g;
    b = b / g;
    if (abs(a - b) == 1) cout << "Equal" << endl;
    else if (a < b) cout << "Dasha" << endl;
    else cout << "Masha" << endl;
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