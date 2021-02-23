#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll arr[3][3];
    ll s = 0;
    for(ll i = 0; i < 3; i++) for(ll j = 0; j < 3; j++) {cin >> arr[i][j]; s += arr[i][j];}
    s /= 2;
    for(ll i = 0; i < 3; i++){
        arr[i][i] = s;
        for(ll j = 0; j < 3; j++){
            if(j != i) arr[i][i] -= arr[i][j];
        }
    }
    for(ll i = 0; i < 3; i++) {
        for(ll j = 0; j < 3; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
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