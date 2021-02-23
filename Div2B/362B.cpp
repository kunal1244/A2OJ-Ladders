#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(m);
    if(!m) {cout << "YES" << endl; return ;}
    for(ll i = 0; i < m; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    if(arr[0] == 1 || arr[m - 1] == n) {cout << "NO" << endl; return ;}
    ll cont = 0, max_cont = 0;
    for(ll i = 0; i < m; i++){
        if(!cont) cont++;
        else{
            if(arr[i] == arr[i - 1] + 1) cont++;
            else cont = 1;
        }
        // cout << cont << " "; 
        max_cont = max(max_cont, cont);
    }
    if(max_cont >= 3) {cout << "NO" << endl; return ;}
    cout << "YES" << endl;
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