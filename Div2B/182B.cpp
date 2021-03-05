#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll d, n;
    cin >> d >> n;
    ll inc = 0;
    for(ll i = 0; i < n - 1; i++) {ll temp; cin >> temp; if(temp < d) inc += d - temp;}
    cin >> d;
    cout << inc << endl;
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