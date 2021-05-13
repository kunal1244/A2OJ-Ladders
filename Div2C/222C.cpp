#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define N 100005
#define P 10000007

void solve(){
    ll a[N], b[N], p[P];
    vector<ll> v[P];
    for (ll i = 2; i < P; i++) {
		if (!p[i]) {
			p[i] = i;
			for (ll j = (ll)i * i; j < P; j += i) p[j] = i;
		}
	}
	ll n, m;
	cin >> n >> m;
	for (ll i = 0; i < n; i++) cin >> a[i];
	for (ll i = 0; i < m; i++) cin >> b[i];
	for (ll i = 0; i < n; i++) {
		for (ll j = a[i]; j > 1; j /= p[j]) v[p[j]].push_back(i); 
	}
	for (ll i = 0; i < m; i++) {
		for (ll j = b[i]; j > 1; j /= p[j]) {
			ll x = p[j];
			if (!v[x].empty()) a[v[x].back()] /= x, b[i] /= x, v[x].pop_back(); 
		}
	}
	cout << n << " " << m << endl;
	for (ll i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;
	for (ll i = 0; i < m; i++) cout << b[i] << " ";
	cout << endl;
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