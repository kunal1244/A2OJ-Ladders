#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll i = 0, m, n;
    cin >> m >> n;
    m = min(m, n);
    cout << m + 1 << endl;
    while(i <= m) cout << i << " " << m - ++i + 1  << endl;
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