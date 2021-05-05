#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll l, r, sum = 0;
set<long long> s;
 
void calc(ll x){
	s.insert(x);
    if(x < r){
        calc(x * 10 + 4);
        calc(x * 10 + 7);
    }
}
void solve(){
    cin >> l >> r;
	calc(0);
	while(l <= r){
		ll val = *s.lower_bound(l);
		sum += (min(r, val) - l + 1) * val;
		l = val + 1;
	}
	cout << sum << endl;
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