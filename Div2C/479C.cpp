#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> arr(n);
    for(ll i = 0 ; i < n; i++){
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end());
    ll result = -1;
    for(int i = 0; i < n; i++) {
        if (result <= arr[i].second) result = arr[i].second;
        else result = arr[i].first;
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
    return 0;
}