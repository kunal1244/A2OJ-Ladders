#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define mod 1000000007
ll inv[1000005];
 
void solve(){
    ll a, b, k, c, s, p;
    cin >> a >> b >> k;
    p = inv[1] = 1, s = 0;
    for (ll i = 2; i <= k; i++) inv[i] = mod - mod / i * inv[mod % i] % mod;
    for (ll i = 0; i <= k; i++){
        c = a * i + b * (k - i);
        while (c){
            if (c % 10 != a && c % 10 != b) break;
            c /= 10;
        }
        if (!c) s = (s + p) % mod;
        p = p * (k - i) % mod * inv[i + 1] % mod;
    }
    cout << s << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    ll flag = 1;
    // cin >> flag;
    while(flag--){
        solve();
    }
    return 0;
}