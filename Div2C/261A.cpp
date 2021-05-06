#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll m;
    cin >> m;
    ll q[m], n;
    for (ll i = 0; i < m; i++) cin >> q[i];
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    ll l = *min_element(q, q + m), ans = 0, k = 0;
    for (ll i = n - 1; i >= 0; i--){
        ans += a[i];
        k++;
        if (k == l) i -= 2, k = 0;
    }
    cout << ans << endl;
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