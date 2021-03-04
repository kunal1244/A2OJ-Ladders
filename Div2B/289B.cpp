#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m, d;
    cin >> n >> m >> d;
    ll arr[n * m];
    cin >> arr[0];
    ll rem = arr[0] % d;
    bool flag = true;
    for(ll i = 1; i < n * m; i++){
        cin >> arr[i];
        if(arr[i] % d != rem) flag = false;
    }
    if(!flag) {cout << -1 << endl; return;}
    sort(arr, arr + n * m);
    ll res = 0;
    for(ll i = 0; i < n * m; i++){
        res += ((ll) abs(arr[n * m / 2] - arr[i])) / d;
    }

    cout << res << endl;
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