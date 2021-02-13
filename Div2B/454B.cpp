#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];
    ll i = 1;
    while(i < n && arr[i] >= arr[i - 1]) i++;
    if(i == n){
        cout << 0 << endl;
        return;
    }
    ll num = i;
    i++;
    while(i < n && arr[i] >= arr[i - 1]) i++;

    if(i == n && arr[n - 1] <= arr[num - 1] && arr[n - 1] <= arr[0]) cout << n - num << endl;
    else cout << -1 << endl;
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