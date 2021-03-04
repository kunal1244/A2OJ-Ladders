#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n, 0);
    for(ll i = 0; i < m; i++){
        ll w, r, b;
        cin >> w >> r >> b;
        if(!arr[w - 1] && !arr[r - 1] && !arr[b - 1]){
            arr[w - 1] = 1; arr[r - 1] = 2; arr[b - 1] = 3;
        }
        else if(arr[w - 1]){
            arr[r - 1] = arr[w - 1] % 3 + 1;    
            arr[b - 1] = arr[r - 1] % 3 + 1;
        }
        else if(arr[r - 1]){
            arr[b - 1] = arr[r - 1] % 3 + 1;    
            arr[w - 1] = arr[b - 1] % 3 + 1;
        }
        else if(arr[b - 1]){
            arr[w - 1] = arr[b - 1] % 3 + 1;    
            arr[r - 1] = arr[w - 1] % 3 + 1;
        }
    }
    for(ll i = 0; i < n; i++) cout << arr[i] << " ";
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