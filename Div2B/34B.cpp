#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    ll sum = 0;
    for(ll i = 0; i < m && arr[i] <= 0; i++) sum += arr[i];
    cout << sum * - 1 << endl;
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