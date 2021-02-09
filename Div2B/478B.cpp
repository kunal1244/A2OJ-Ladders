#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll nC2(ll n){
    return n * (n - 1) / 2;
}

void solve(){
    ll n, m;
    cin >> n >> m;
    cout << nC2(n / m) * (m - n % m) + nC2(n / m + 1) * (n % m) << " " << nC2(n - m + 1) << endl;  
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
}