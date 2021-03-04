#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    ll max_length = 0, temp_length;
	for(ll i = 0; i < n; i++) cin >> arr[i];
	for(ll i = 0; i < n; i++){
		temp_length = 1;
		for(ll j = i - 1; j >= 0; j--) { if(arr[j + 1] >= arr[j]) temp_length++; else break;}
		for(ll j = i + 1; j < n; j++) {if(arr[j - 1] >= arr[j]) temp_length++; else break;}
		max_length = max(temp_length, max_length);
    }
	cout << max(temp_length, max_length) << endl;
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