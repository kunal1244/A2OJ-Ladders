#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, k;
    cin >> n >> k;
    ll arr[n], result = 0;
    for(ll i = 0; i < n; i++) cin >> arr[i];
    while(arr[0] != k){
        for(ll i = n - 1; i >= 0;){
            if(arr[i] < k){
                ll temp = arr[i];
                arr[i]++;
                i--;
                while(i >= 0 && arr[i] == temp) i--;
            }
            else i--;
        }
        result++;
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