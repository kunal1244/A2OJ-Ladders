#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string str;
    cin >> str;
    vector<ll> arr(26, 0);
    for(ll i = 0; i < str.size(); i++) arr[str[i] - 'a']++;
    ll odds = 0;
    for(ll i = 0; i < 26; i++){
        if(arr[i] % 2) odds++;
    }
    if(!odds || odds % 2) cout << "First" << endl;
    else cout << "Second" << endl;
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