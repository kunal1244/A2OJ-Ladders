#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    vector<ll> arr(100001, 0), dp(100001, 0); 
    ll n, temp;
    cin >> n;
    ll max_val = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> temp;
        arr[temp]++;
        max_val = max(temp, max_val);
    }
    dp[1] = arr[1];
    for(int i = 2; i <= max(max_val, n) ; i++){
        dp[i] = max(dp[i - 1], dp[i - 2] + arr[i] * i);
    }
    cout << dp[100000] << endl;
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