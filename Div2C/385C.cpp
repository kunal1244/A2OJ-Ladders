#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define MAXN 10000001

void solve(){
    bool prime[MAXN];
    ll n, count[MAXN], temp, f[MAXN];
    memset(prime, true, sizeof(prime));
    memset(f, 0, sizeof(f));
    cin >> n;
    for (ll i = 0; i < n; i++){
        cin >> temp;
        count[temp]++;
    }
    for (ll i = 2; i * i < MAXN; i++) for (ll j = i * i; j < MAXN; j += i) prime[j] = false;
    for (ll i = 2; i < MAXN; i++) {
        f[i] += f[i - 1];
        if (prime[i]) for (ll j = i; j < MAXN; j += i) f[i] += count[j];
    }
    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++){
        ll l, r;
        cin >> l >> r;
        cout << f[min(r,10000000LL)] - f[min(l,10000000LL) - 1] << endl;
    }
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}