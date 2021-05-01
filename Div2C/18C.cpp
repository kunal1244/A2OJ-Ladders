#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, count = 0;
    cin >> n;
    ll arr[n];
    cin >> arr[0];
    for(ll i = 1; i < n; i++) {cin >> arr[i]; arr[i] += arr[i - 1];}
    for(ll i = 0; i < n - 1; i++) if(arr[i] * 2 == arr[n - 1]) count++;
    cout << count << endl;
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