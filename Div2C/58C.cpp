#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll t, f, c = 0, arr[100005];
    memset(arr, 0, sizeof(arr));
    cin >> t;
    for (ll i = 1; i <= t; i++){
        cin >> f;
        f -= min(i, t - i + 1);
        if (f >= 0) c = max(++arr[f], c);
    }
    cout << t - c << endl;
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