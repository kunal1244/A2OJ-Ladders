#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define mod 1000000007 

vector<vector<ll>> graph(100001), transposeGraph(100001);
bool visited[100001];
ll arr[100001];
stack<ll> st;
ll c = 1, min_val = INT_MAX;

void dfs(ll x){
    visited[x] = true;
    for(ll i = 0; i < graph[x].size(); i++) if(!visited[graph[x][i]]) dfs(graph[x][i]);
    st.push(x);
}

void sfd(ll x){
    if(arr[x] == min_val) c++;
    else if(arr[x] < min_val) c = 1, min_val = arr[x];
    visited[x] = true;
    for(ll i = 0; i < transposeGraph[x].size(); i++) if(!visited[transposeGraph[x][i]]) sfd(transposeGraph[x][i]);
}

void solve(){
    memset(visited, false, sizeof(visited));
    ll n, price = 0, ways = 1;
    cin >> n;
    for(ll i = 0; i < n; i++) cin >> arr[i];
    ll m;
    cin >> m;
    for(ll i = 0; i < m; i++){
        ll a, b;
        cin >> a >> b;
        graph[a - 1].push_back(b - 1);
        transposeGraph[b - 1].push_back(a - 1);
    }
    for(ll i = 0; i < n; i++) if(!visited[i]) dfs(i);
    memset(visited, false, sizeof(visited));
    while(!st.empty()){
        ll x = st.top();
        c = 1;
        min_val = INT_MAX;
        st.pop();
        if(!visited[x]) sfd(x);
        if(min_val != INT_MAX) price += min_val, ways = (ways * c) % mod;
    }
    cout << price << " " << ways << endl;
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