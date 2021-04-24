#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, l = 0, r;
    cin >> n;
    ll arr[n];
    for (ll i = 1; i <= n; i++){
        cin >> arr[i];
        if (arr[i] != i){
            r = i;
            if (!l) l = i;
        }
    }
    for (ll i = l, j = r; i <= r; i++, j--){
        if (arr[i] != j){
            cout << "0 0" << endl;
            return ;
        }
    }
    cout << l << " " << r << endl;
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