#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> tree[100010], ans;
bool init[100010], goal[100010];

void dfs(ll u, ll v, ll even, ll odd){
    init[v] ^= even;
    if (init[v] != goal[v]) ans.push_back(v + 1), even ^= 1;
    for (auto w : tree[v]) if (w != u) dfs(v, w, odd, even);
}

void solve(){
    ll n;
    cin >> n;

    for(ll i = 0; i < n - 1;i++){
        ll u, v;
        cin >> u >> v;
        u--, v--;
        tree[u].push_back(v), tree[v].push_back(u);
    }

    for (ll i = 0; i < n; i++) cin >> init[i];
    for (ll i = 0; i < n; i++) cin >> goal[i];

    dfs(-1, 0, 0, 0);
    cout << ans.size() << endl;
    for (auto v : ans)
        cout << v << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    ll flag = 1;
    // cin >> flag;
    while(flag--){
        solve();
    }
    return 0;
}