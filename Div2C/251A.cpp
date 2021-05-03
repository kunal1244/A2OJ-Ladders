#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, d, ans = 0, j = 0;
    cin >> n >> d;
    ll arr[n];
    for (ll i = 0; i < n; i++) cin >> arr[i];
    for (ll i = 0; i < n; i++){
        while (arr[i] - arr[j] > d) j++;
        ans += (i - j) * (i - j - 1) / 2;
    }
    cout << ans << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    ll flag = 1;
    // cin >> flag;
    while(flag--){
        solve();
    }
    return 0;
}