#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, k, d;
    cin >> n >> k >> d;
    if (n > pow(k, d)){
        cout << -1 << endl;
        return ;
    }
    ll ans[d][n];
    memset(ans, 0LL, sizeof(ans));
    for (ll i = 0; i < n; i++){
        ll j = 0, p = i;
        while (p){
            ans[j++][i] = p % k;
            p /= k;
        }
    }
    for (ll i = 0; i < d; i++){
        for (ll j = 0; j < n; j++) cout << ans[i][j] + 1 << " ";
        cout << endl;
    }
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}