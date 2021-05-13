#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 1010

ll dp[MAX][MAX], m, n, maxval;
string grid[MAX], str = "IMAD";

ll dfs(ll i, ll j, ll k){
    ll temp = 0;
    if (dp[i][j] != 0) return dp[i][j];
    dp[i][j] = INT_MAX;
    if (i > 0 && grid[i - 1][j] == str[k]) temp = max(temp, dfs(i - 1, j, (k + 1) % 4));
    if (i < n - 1 && grid[i + 1][j] == str[k]) temp = max(temp, dfs(i + 1, j, (k + 1) % 4));
    if (j > 0 && grid[i][j - 1] == str[k]) temp = max(temp, dfs(i, j - 1, (k + 1) % 4));
    if (j < m - 1 && grid[i][j + 1] == str[k]) temp = max(temp, dfs(i, j + 1, (k + 1) % 4));
    dp[i][j] = min((ll) INT_MAX, temp + 1);
    return dp[i][j];
}

void solve(){
    cin >> n >> m;
    for (ll i = 0; i < n; i++) cin >> grid[i];
    for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) if (grid[i][j] == 'D') maxval = max(maxval, dfs(i, j, 0));
    if (maxval >= INT_MAX) cout << "Poor Inna!";
    else if (maxval < 4) cout << "Poor Dima!";
    else cout << maxval / 4;
    cout << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}