#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    ll result = 0;
    bool piled[n];
    memset(piled, false, sizeof(piled));
    while(true){
        bool flag = true;
        ll w = 0;
        for(ll i = 0; i < n; i++){
            if(!piled[i]){
                flag = false;
                if(arr[i] >= w) piled[i] = true, w++;
            }
        }
        if(flag) {cout << result << endl; return ;}
        else result++;
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