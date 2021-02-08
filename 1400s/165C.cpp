#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll k;
	cin >> k;
	string s;
	cin >> s;
	map<ll, ll> mp;
	ll sum = 0, ans = 0;
	mp[0] = 1;
	for(ll i = 0; i < s.size(); i++){
		sum += s[i] - '0';
		if(sum >= k) ans += mp[sum - k];
		mp[sum]++;
	}
	cout << ans << endl;
}