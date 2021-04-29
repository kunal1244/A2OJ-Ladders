#include <bits/stdc++.h>
using namespace std;
#define ll long long int

pair<ll, ll> drifts(100);
bool seen[100];
 
void dfs(int c, int n){
    seen[c] = true;
    for(ll i = 0; i < n; i++){
        if(!seen[i] && (drifts[c].first == drifts[i].first ||  drifts[c].second == drifts[i].second)) dfs(i, n);
    }
}

void solve(){
    ll n, count = 0, a, b;
    memset(seen, false, sizeof(seen));
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        a--; b--;
        drifts[i] = {a, b};
    }
    seen[0] = true; 
    dfs(0, n);
    for(ll i = 0; i < n; i++) if(!seen[i]) dfs(i, n), count++;
    cout << count << endl;

}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}