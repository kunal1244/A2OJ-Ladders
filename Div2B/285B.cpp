#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int solve1(){
    ll n, x, y;
    cin >> n >> x >> y;
    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];

    ll count = 0;
    for(ll i = 0; i < n; i++){
        if(x == y) return count;
        else{
            x = arr[x - 1];
            count++;
        }
    }
    return -1;
}

int solve(){
    cout << solve1() << endl;
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