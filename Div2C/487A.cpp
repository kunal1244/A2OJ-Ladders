#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll a, b, c, p, q, r, x, y, z, t, m, n, mini = 100000000;
    cin >> a >> b >> c;
    cin >> p >> q >> r;
    cin >> x >> y >> z;
    for (ll i = 0; i <= 200; i++){
        for (ll j = 0; j <= 100; j++){
            if (i + b <= r) continue;
            else{
                t = (p - 1) / (b + i - r) + 1;
                n = a - t * (q - j - c);
            }
            if (n <= 0) mini = min(mini, (-n + 1) * x + y * i + z * j);
            else mini = min(mini, y * i + z * j);
        }
    }
    cout << mini << endl;
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