#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll n, x, y;
set<ll> s;

void dfs(ll val, ll pos){
    if(val > n || pos > 10) return ;
    s.insert(val);
    dfs(val * 10 + x, pos + 1);
    dfs(val * 10 + y, pos + 1);
}

void solve(){
    cin >> n;
    for(x = 0; x < 10; x++){
        for(y = 0; y < 10; y++){
            dfs(0, 0);
        }
    }
    cout << s.size() - 1 << endl;
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