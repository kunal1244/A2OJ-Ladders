#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    ll prev;
    cin >> prev;
    ll curr_length = 1;
    ll result = n;
    for(ll i = 0 ; i < n - 1; i++){
        ll curr;
        cin >> curr;
        if(curr == prev) curr_length++;
        else{
            result += curr_length * (curr_length - 1) / 2;
            curr_length = 1;
        }
        prev = curr;
    } 
    cout << result + curr_length * (curr_length - 1) / 2 << endl;
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