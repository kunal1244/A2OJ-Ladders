#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    char arr[n][n];
    ll r = 0, c = 0;
    for (ll i = 0; i < n; i++) for (ll j = 0; j < n; j++) cin >> arr[i][j];
    for (ll i = 0; i < n; i++) for (ll j = 0; j < n; j++) if (arr[i][j] == '.'){ r++; break; }
    for (ll i = 0; i < n; i++) for (ll j = 0; j < n; j++) if (arr[j][i] == '.'){ c++; break; }
    if (r < n && c < n){ cout << -1 << endl; return ; }
    if (r == n){
        for (ll i = 0; i < n; i++){
            for (ll j = 0; j < n; j++) if (arr[i][j] == '.'){ cout << i + 1 << " " << j + 1 << endl; break; }
        }
    } 
    else {
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) if (arr[j][i] == '.'){ cout << j + 1 << " " << i + 1 << endl; break; }
        }
    }
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