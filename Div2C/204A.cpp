#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll f(ll x) {
    if (x < 10) return x;
    ll result = x / 10 + 9, y = x;
    while (y >= 10) y /= 10;
    if (y > x % 10) result--;
    return result;
}

void solve(){
    ll l, r;
    cin >> l >> r;
    cout << f(r) - f(l - 1) << endl;
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