#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000003

void solve(){
    string str;
    cin >> str;
    string chars = "><+-.,[]";
    ll result = 0;
    for(ll i = 0; i < str.size(); i++){
        for(ll j = 0; j < 8; j++){
            if(str[i] == chars[j]) result = (result * 16 + j + 8) % MOD;
        }
    }
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