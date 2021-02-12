#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string n;
    cin >> n;
    ll result = -1;
    for(ll i = 0; i < n.size(); i++){ 
        if(!((n[i] - '0') % 2)) {
            result = i; 
            if(n[n.size() - 1] > n[i]) break;
        }
    }
    if(result == -1) cout << -1 << endl;
    else{
        swap(n[result], n[n.size() - 1]);
        cout << n << endl;
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