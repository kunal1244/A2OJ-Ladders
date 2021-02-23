#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, t;
    cin >> n >> t;
    vector<ll> arr(n);
    cin >> arr[0];
    for(ll i = 1; i < n; i++) {cin >> arr[i]; arr[i] += arr[i - 1];}
    ll i = 0, j = 0, max_length = 0, sub = 0;
    while(i < n){
        while(j < n && (arr[j] - sub <= t)) j++;
        max_length = max(max_length, j - i);
        sub = arr[i++];
    }
    cout << max_length << endl;
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