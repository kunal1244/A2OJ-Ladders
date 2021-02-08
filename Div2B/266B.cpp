#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, t;
    cin >> n >> t;
    string q;
    cin >> q;
    for(ll i = 0; i < t; i++){
        for(ll j = 0; j < n - 1; j++){
            if(q[j] == 'B' && q[j + 1] == 'G'){
                q[j + 1] = 'B';
                q[j] = 'G';
                j++;
            }
        }
    }
    cout << q << endl;
}
 
int main(){
    ll t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}