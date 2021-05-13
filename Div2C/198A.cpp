#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll k, b, n, t, z = 1;
    cin >> k >> b >> n >> t;
    while (k * z + b <= t) z = z * k + b, n--;
    if(n <= 0) cout << 0 << endl; 
    else cout << n << endl;
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