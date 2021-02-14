#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

void solve(){
    ll n, x, y;
    cin >> x >> y >> n;
    ll arr[6] = {x, y, y - x, -x, -y, x - y};
    ll ind = n % 6 - 1;
    if(ind == -1) ind = 5;
    ll val = arr[ind] % MOD;
    if(val < 0) val = MOD + val;
    cout << val << endl;
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