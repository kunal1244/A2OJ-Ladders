#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];
    ll min_res = INT_MAX, min_ind;
    for(ll i = 0; i < k; i++){
        ll res = 0;
        for(ll j = 0; j < n / k; j++){
            res += arr[(i + j * k) % n];
        }
        if(res < min_res){
            min_ind = i;
            min_res = res;
        }
    }
    cout << min_ind + 1 << endl;
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