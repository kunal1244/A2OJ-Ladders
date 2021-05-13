#include <bits/stdc++.h>
using namespace std;
#define ll long long int

unordered_map<ll, pair<bool, vector<ll>>> g;

void dfs(ll x){
    auto &itr = g[x];
    if (itr.first) return;
    itr.first = true;
    cout << x << " ";
    for (auto &j : itr.second) dfs(j);
}

void solve(){
    ll n;
    cin >> n;
	while(n--){
		ll a, b;
        cin >> a >> b;
		g[a].second.push_back(b);
		g[b].second.push_back(a);
	}
	for (auto &i: g) if(i.second.second.size() == 1){ dfs(i.first); break; }
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    ll flag = 1;
    // cin >> flag;
    while (flag--) solve();
    return 0;
}