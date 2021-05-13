#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    vector<ll> a[26];
    for (ll i = 0; i < s1.length(); i++) a[s1[i] - 'a'].push_back(i); 
    ll j = 0, ans = 1;
    for (ll i = 0; i < s2.length(); i++){
        ll id = s2[i] - 'a';
        if (a[id].empty()) { cout << -1 << endl; return ; }
        ll k = lower_bound(a[id].begin(), a[id].end(), j) - a[id].begin();
        if (k == a[id].size()) ans++, i--, j = 0;
        else j = a[id][k] + 1;
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