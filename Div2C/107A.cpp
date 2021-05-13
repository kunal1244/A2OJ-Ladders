#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define maxn 1010

ll minval, dest;
bool outwards[maxn], inwards[maxn];
vector <vector<pair<ll, ll> > > graph(maxn);
vector <pair<int, pair<ll, ll>>> result; 

void dfs(ll u){
    dest = u;
    if (!outwards[u]) return;
    minval = min(minval, graph[u][0].second);
    dfs(graph[u][0].first);
}

void solve(){
    ll n, p;
    memset(inwards, false, sizeof(inwards));
    memset(outwards, false, sizeof(outwards));
    cin >> n >> p;
    while (p--){
        ll a, b, d;
        cin >> a >> b >> d;
        graph[a].push_back({b, d});
        inwards[b] = true;
        outwards[a] = true;
    }
    for (ll i = 0; i < maxn; i++){
        if (outwards[i] && !inwards[i]){
            minval = INT_MAX;
            dfs(i);
            result.push_back({i, {dest, minval}});
        }
    }
    cout << result.size() << endl;
    for (ll i = 0; i < result.size(); i++) cout << result[i].first << " "  << result[i].second.first << " " << result[i].second.second << endl;
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