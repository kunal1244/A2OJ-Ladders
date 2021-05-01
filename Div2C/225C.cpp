#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    ll whites[m + 1], blacks[m + 1], dp[m + 1][2];
    memset(whites, 0, sizeof(whites));
    memset(blacks, 0, sizeof(blacks));
    memset(dp, 0, sizeof(dp));
    for (ll i = 1; i <= n; i++){
        for (ll j = 1; j <= m; j++){
            char temp;
            cin >> temp;
            if (temp == '#') blacks[j]++;
            else whites[j]++;
        }
    }
    for (ll j = 1; j <= m; j++){
        whites[j] += whites[j - 1];
        blacks[j] += blacks[j - 1];
        dp[j][0] = INT_MAX;
        dp[j][1] = INT_MAX;
    }
    for (ll i = 0; i < m; i++){
        for (ll j = x; j <= y; j++){
            if(i + j <= m) {
                dp[i + j][0] = min(dp[i + j][0], dp[i][1] + blacks[i + j] - blacks[i]);
                dp[i + j][1] = min(dp[i + j][1], dp[i][0] + whites[i + j] - whites[i]);
            }
        }
    }
    cout << min(dp[m][0], dp[m][1]) << endl;
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