#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    ll a = 0, g = 0;
    string result = "";
    for(ll i = 0; i < n; i++){
        ll ai, gi;
        cin >> ai >> gi;
        if(a + ai - g > 500){
            g += gi;
            result.push_back('G');
        }
        else{
            a += ai;
            result.push_back('A');
        }
    }
    if(abs(a - g) > 500) cout << -1 << endl;
    else cout << result << endl;
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