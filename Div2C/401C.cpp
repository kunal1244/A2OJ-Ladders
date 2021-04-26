#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m;
    cin >> n >> m;
    if(m > 2 * (n + 1) || m < n - 1) {cout << -1 << endl; return ;}
    vector<ll> arr(n + 1, 1);
    arr[0] = 0;
    arr[n] = 0;
    m -= n - 1;
    if(m < 3) {arr[0] = m; m = 0;}
    else {arr[0] = 2; m -= 2;}
    for(ll i = 1; i < n; i++){
        if(m) {arr[i] = 2; m--;}
        else break;
    }
    arr[n] = m;
    if(arr[0] == 1) cout << 1;
    else if(arr[0] == 2) cout << "11";
    for(ll i = 1; i <= n; i++){
        cout << 0;
        if(arr[i] == 1) cout << "1";
        else if(arr[i] == 2) cout << "11";
    }
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