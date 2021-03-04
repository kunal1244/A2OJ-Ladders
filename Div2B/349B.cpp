#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, a[10], _min = INT_MAX, max, ans;
	cin >> n;
	for(ll i = 1; i <= 9; i++){
		cin >> a[i];
		_min = min(_min, a[i]);
	}
	if(n < _min) cout << -1 << endl;
	while(n >= _min){
		max = n % _min + _min;
		ll la = 0;
		for(ll i = 9; i >= 1; i--){
			if(a[i] <= max){
                la = a[i]; 
                ans = i;
				break;
            }
		}
		cout << ans;
		n -= la;
	}	
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