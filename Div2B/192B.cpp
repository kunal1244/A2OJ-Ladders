#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, a, b, result;
    cin >> n;
    cin >> result;
    a = result;
    for(ll i = 1; i < n - 1; i++){
        cin >> b;
        result = min(result, max(a, b));
        a = b;
    }
    if(n > 1) cin >> b; result = min(result, b);
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