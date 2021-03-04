#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m;
    cin >> n >> m;
    ll arr[n][m];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(ll i = 1; i < n; i++) arr[i][0] += arr[i - 1][0];
    for(ll j = 1; j < m; j++) arr[0][j] += arr[0][j - 1];

    for(ll i = 1; i < n; i++){
        for(ll j = 1; j < m; j++){
            arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]) + arr[i][j];
        }
    }

    for(ll i = 0; i < n; i++) cout << arr[i][m - 1] << " ";
    cout << endl;
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