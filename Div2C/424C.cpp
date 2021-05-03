#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, ans = 0, f[1000004];
    cin >> n;
    memset(f, 0, sizeof(f));
    for (int i = 1; i <= n; i++){
        ll x;
        cin >> x;
        ans ^= x;
        f[i] = f[i - 1] ^ i, ans ^= f[n % i];
        if ((n / i) % 2 == 1) ans ^= f[i - 1];
    }
    cout << ans << endl;
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