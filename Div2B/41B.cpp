#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, b;
    cin >> n >> b;
    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];
    ll maxval = b;
    for(ll i = 0; i < n - 1; i++){
        ll val = arr[i], tempmax = arr[i];
        for(ll j = i + 1; j < n; j++) tempmax = max(tempmax, arr[j]);
        if(tempmax > val) maxval = max(maxval, b % val + (b / val) * tempmax);
    }
    cout << maxval << endl;
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