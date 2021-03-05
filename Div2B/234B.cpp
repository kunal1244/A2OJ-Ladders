#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n, m;
    cin >> n >> m;
    vector<pair<ll,ll>> arr;
    for(ll i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        arr.push_back(make_pair(temp, i));
    }
    sort(arr.begin(),arr.end());
    cout << arr[n - m].first << endl;
    for(ll i = n - 1; i >= n - m; i--) cout << arr[i].second + 1 << " ";
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