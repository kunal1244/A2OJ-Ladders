#include <bits/stdc++.h>
#include <fstream>
using namespace std;
#define ll long long int

void solve(){
    ifstream in("input.txt");
	ofstream out("output.txt");
    ll cdates[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    ll days[500] = {0}, max_val = 0;
    ll n;
    in >> n;
    for(ll i = 0; i < n; i++){
        ll a, b, c, d;
        in >> a >> b >> c >> d;
        for(ll j = 0; j < d; j++){
            ll val = cdates[a - 1] + b + 100 - j;
            days[val] += c;
            max_val = max(max_val, days[val]);
        }
    }
    out << max_val << endl;
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