#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    ll curr_max, result = 0;
    cin >> curr_max;
    for(ll i = 1; i < n; i++){
        ll temp;
        cin >> temp;
        if(curr_max >= temp){
            result += curr_max - temp;
        }
        curr_max = temp;
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