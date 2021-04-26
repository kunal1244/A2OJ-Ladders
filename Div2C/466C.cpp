#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll N = 1e6 + 7;
    ll arr[N], n;
	cin >> n;
	for (ll i = 1; i <= n; i++){
		cin >> arr[i];
        arr[i] += arr[i - 1];
    }
	if (arr[n] % 3) cout << 0 << endl;
	else{
		ll x = 0, y = 0;
		for (ll i = 1; i < n; i++){
			if (arr[i] == arr[n] / 3) y++;
			if (arr[i] == (2 * arr[n] / 3)) x += y;
		}
		cout << x << endl;
	}
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