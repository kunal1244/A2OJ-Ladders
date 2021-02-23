#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi 3.1415926536

void solve(){
    ll n, area = 0;
    cin >> n;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    if(n % 2) {arr.insert(arr.begin(), 0); n++;}
    for(ll i = 0; i < n / 2; i++){
        area += arr[2 * i + 1] * arr[2 * i + 1] - arr[2 * i] * arr[2 * i];
    }
    cout << fixed << setprecision(10) << area * pi << endl; 
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