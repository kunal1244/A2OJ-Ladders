#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    string recur = "abcd", res = "";
    for(ll i = 0; i < n / 4; i++) res += recur;
    for(ll i = 0; i < n % 4; i++) res.push_back(recur[i]);
    cout << res << endl;
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