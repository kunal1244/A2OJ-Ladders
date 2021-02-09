#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll arr[m];
    for(ll i = 0; i < m; i++) cin >> arr[i];
    ll f;
    cin >> f;
    ll result = 0;
    for(ll i = 0; i < m; i++){
        ll temp = f, count = 0;
        for(ll j = 0; j < n; j++){
            if(temp % 2 != arr[i] % 2) count++;
            temp /= 2;
            arr[i] /= 2;
        }
        if(count <= k) result++;
    }
    cout << result << endl;
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
}