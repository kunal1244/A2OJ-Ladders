#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, d, l;
    cin >> n >> d >> l;
    ll maxval = ((n + 1) / 2) * l - n / 2, minval = (n + 1) / 2 - (n / 2) * l;
    // cout << minval << " " << maxval << " " << d << endl; 
    if(d > maxval || d < minval) {cout << -1 << endl; return;}
    vector<ll> arr(n, 1);
    ll sum = 0;
    if(n % 2) sum = 1;
    if(d > sum){
        for(ll i = 0; i < n; i += 2){
            if(sum + l - 1 <= d){
                arr[i] = l;
                sum += l - 1;
            } 
            else{
                arr[i] += d - sum;
                sum = d;
                break;
            }
        }
    }
    else{
        for(ll i = 1; i < n; i += 2){
            if(sum - l + 1 >= d){
                arr[i] = l;
                sum -= l - 1;
            } 
            else{
                arr[i] += sum - d;
                sum = d;
                break;
            }
        } 
    }
    for(ll i = 0; i < n; i++) cout << arr[i] << " ";
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