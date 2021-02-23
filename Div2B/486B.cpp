#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m;
    cin >> n >> m;
    int arr[n][m];
    bool r = false, c = false;
    bool rows[n], cols[m];
    for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++) cin >> arr[i][j];
    for(ll i = 0; i < n; i++){
        bool rflag = true;
        for(ll j = 0; j < m; j++){
            if(!arr[i][j]) {rflag = false; break;}
        }
        if(rflag) {rows[i] = true; r = true;}
        else rows[i] = false;
    }
    for(ll j = 0; j < m; j++){
        bool cflag = true;
        for(ll i = 0; i < n; i++){
            if(!arr[i][j]) {cflag = false; break;}
        }
        if(cflag) {cols[j] = true; c = true;}
        else cols[j] = false;
    }
    for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++) if(arr[i][j] && !(rows[i] || cols[j])) {cout << "NO" << endl; return ;}
    if((r && !c) || (!r && c)) {cout << "NO" << endl; return ;}
    cout << "YES" << endl;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            if(rows[i] && cols[j]) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << endl;
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