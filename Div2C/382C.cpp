#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
	bool flag = false, dflag = false;
    ll n, index = -1;
    cin >> n;
    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    if(n == 1) {cout << -1 << endl; return;}
    if(n == 2){
        ll diff = arr[1] - arr[0];
        if(!diff) cout << 1 << endl << arr[0] << endl;
        else if(diff % 2) cout << 2 << endl << arr[0] - diff << " " << arr[1] + diff << endl;
        else cout << 3 << endl << arr[0] - diff << " " << arr[0] + diff / 2 << " " << arr[1] + diff << endl;
        return ;
    }
    ll diff = INT_MAX;
    for(ll i = 1; i < n; i++){
        ll temp_diff = arr[i] - arr[i - 1];
        if(diff != temp_diff){
            if(diff == INT_MAX) diff = temp_diff;
            else{
                if(diff == temp_diff * 2){
                	if(flag) {cout << 0 << endl; return;}
                	index = 1;
                }
                else if(diff * 2 == temp_diff){
                	if(!dflag) index = i, dflag = true;
                	else {cout << 0 << endl; return;}
                }
                else {cout << 0 << endl; return;}
            }
        }
        else{
            flag = true;
            if(index == 1) {cout << 0 << endl; return;}
        }
    }
    if(!diff) cout << 1 << endl << arr[0] << endl;
    else if(index == -1) cout << 2 << endl << arr[0] - diff << " " << arr[n - 1] + diff << endl;
    else cout << 1 << endl << (arr[index] + arr[index - 1]) / 2 << endl;
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