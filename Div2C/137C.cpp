#include <bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){
    ll n;
    cin >> n;
    pair<ll, ll> arr[n];
    for (ll i = 0; i < n; i++){
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr + n);
    ll result = 0, curr_max = arr[0].second;
    for (ll i = 1; i < n; i++){
        if (arr[i].second < curr_max) result++;
        else curr_max = arr[i].second;
    }
    cout << result << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}