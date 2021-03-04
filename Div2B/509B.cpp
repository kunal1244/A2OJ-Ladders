#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];
    ll min_val = *min_element(arr, arr + n), max_val = *max_element(arr, arr + n);

    if(max_val - min_val > k) {cout << "NO" << endl; return ;}
    
    cout << "YES" << endl;
    for(ll j = 0; j < n; j++){
        for(ll i = 0; i < min_val; i++){
            cout << 1 << " ";
        }
        for(ll i = 0; i < arr[j] - min_val; i++){
            if(i < k) cout << i + 1 << " ";
            else cout << i - k + 1 << " ";
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