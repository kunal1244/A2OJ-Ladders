#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll a, ans = 0;
    string s;
    map<ll, ll> counts;
    cin >> a >> s;
    for (ll i = 0; i < s.size(); i++){
        ll val = 0;
        for (ll j = i; j < s.size(); j++) val += s[j] - '0', counts[val]++;
    }
    if (!a) ans = counts[0] * (s.size() * (s.size() + 1) - counts[0]);
    for (ll i = 1; i * i <= a; i++) if (a % i == 0) ans += counts[i] * counts[a / i] * (i * i == a ? 1 : 2);
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