#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m;
    cin >> n >> m;
    map<string, string> b;
    for(ll i = 0; i < m; i++){
        string temp1, temp2;
        cin >> temp1 >> temp2;
        b[temp1] = temp2;
    }
    for(ll i = 0; i < n; i++){
        string temp;
        cin >> temp;
        if(b[temp].size() < temp.size()) cout << b[temp] << " ";
        else cout << temp << " ";
    }
    cout << endl;
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