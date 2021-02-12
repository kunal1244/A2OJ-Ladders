#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string s;
    ll k;
    cin >> s >> k;
    ll arr[26];
    ll max_val = INT_MIN, result = 0;
    for(ll i = 0; i < 26; i++){
        cin >> arr[i];
        max_val = max(max_val, arr[i]);
    }
    for(ll i = 0; i < s.size(); i++) result += (arr[s[i] - 'a']) * (i + 1);
    result += max_val * (s.size() * k + k * (k + 1) / 2);
    cout << result << endl;
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