#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string n;
    cin >> n;
    ll fours = 0, sevens = 0;
    for(ll i = 0; i < n.size(); i++){
        if(n[i] == '4') fours++;
        else if(n[i] == '7') sevens++;
    }
    if(!fours && !sevens) cout << -1 << endl;
    else if(fours >= sevens) cout << 4 << endl;
    else cout << 7 << endl;
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