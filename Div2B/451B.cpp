#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];
    int i = 1;
    while(i < n && arr[i] >= arr[i - 1]) i++;
    ll l = i;
    while(i < n && arr[i] <= arr[i - 1]) i++;
    ll r = i;
    while(i < n && arr[i] >= arr[i - 1]) i++;
    
    if(i == n){
        if(!(l == 1 || arr[r - 1] >= arr[l - 2]) || !(r == n || arr[l - 1] <= arr[r])){
            cout << "no" << endl;
            return;
        }
        cout << "yes" << endl;
        cout << l << " " << r << endl;
    }
    else cout << "no" << endl;
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
}