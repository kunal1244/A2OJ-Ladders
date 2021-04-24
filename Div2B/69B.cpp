#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m;
    cin >> n >> m;
    ll arr[m][4];
    for(ll i = 0; i < m; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
    }
    ll result = 0;
    for(ll i = 1; i <= n; i++){
        ll min_time = INT_MAX, min_index;
        for(ll j = 0; j < m; j++){
            if(arr[j][0] <= i && arr[j][1] >= i){
                if(arr[j][2] < min_time){
                    min_time = arr[j][2];
                    min_index = j;
                }
            }
        }
        if(min_time != INT_MAX) result += arr[min_index][3];
    }
    cout << result << endl;
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