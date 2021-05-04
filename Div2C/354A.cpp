#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, l, r, ql, qr, result = INT_MAX;
    cin >> n >> l >> r >> ql >> qr;
    ll arr[n + 1];
    arr[0] = 0;    
    for(ll i = 1; i <= n; i++) {cin >> arr[i]; arr[i] += arr[i - 1];}

    for (int i = 0; i <= n; i++){
        ll j = n - i, val = arr[i] * l + (arr[n] - arr[i]) * r;
        if (i > j) val += (i - j - 1) * ql;
        if (i < j) val += (j - i - 1) * qr;
        result = min(result, val);
    }
    cout << result << endl;
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