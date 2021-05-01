#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    pair<ll, ll> arr[n];
    for(ll i = 0; i < n; i++) {cin >> arr[i].first; arr[i].second = i + 1;} 
    sort(arr, arr + n);
    ll t1 = n / 2, t2 = n / 2;
    if(n % 2) t1++, t2++;
    ll a[t1 + 1] = {0}, b[t2 + 1] = {0};
    for(ll i = 0; i < n / 2; i++){
        a[i + 1] = arr[2 * i].second;
        a[0] += arr[2 * i].first;
        b[i + 1] = arr[2 * i + 1].second;
        b[0] += arr[2 * i + 1].first;
    }
    if(n % 2) {
        if(a[0] > b[0]) t1--, b[t2] = arr[n - 1].second;
        else t2--, a[t1] = arr[n - 1].second;
    }
    cout << t1 << endl;
    for(ll i = 1; i <= t1; i++) cout << a[i] << " ";
    cout << endl;
    cout << t2 << endl;
    for(ll i = 1; i <= t2; i++) cout << b[i] << " ";
    cout << endl;
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