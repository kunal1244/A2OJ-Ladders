#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, t;
    cin >> n >> t;
    string q;
    cin >> q;
    while(t--){
        for(ll j = 0; j < n - 1; j++){
            if(q[j] == 'B' && q[j + 1] == 'G'){
                swap(q[j + 1], q[j]);
                j++;
            }
        }
    }
    cout << q << endl;
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
}