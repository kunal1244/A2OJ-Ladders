#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll a, b;
    cin >> a >> b;
    bool flag = 0;
    for (ll x = 1; x < a; x++){
        ll y = sqrt(a * a - x * x);
        if (y * y + x * x == a * a){
            ll l = -b * y, m = b * x;
            if (!(l % a) && !(m % a) && m / a != y && x != l / a){
                cout << "YES" << endl << x << " " << y << endl << l / a << " " << m / a << endl << "0 0" << endl;
                flag = true;
                return ;

            }
        }
    }
    if (!flag) cout << "NO" << endl;
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