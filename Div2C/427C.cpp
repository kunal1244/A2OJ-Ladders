#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define mod 1000000007 

ll n, m, price = 0;

void dfs(ll x, vector<bool> &visited, vector<vector<bool>> path){
    visited[x] = true;
    for(ll i = 0; i < n; i++){
        if(path[i][x] && path[x][i] && !visited[i]) dfs(i, visited, path);
    }
}


void solve(){
    cin >> n;
	vector<bool> visited(n, false);
	vector<vector<bool>> path(n, vector<bool> (n, false));
    pair<ll, ll> arr[n];
    for(ll i = 0; i < n; i++) { cin >> arr[i].first; arr[i].second = i; }
    sort(arr, arr + n);
    cin >> m;
    for(ll i = 0; i < m; i++){
        ll l, r;
        cin >> l >> r;
        path[l - 1][r - 1] = true;
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(arr[i][j])
        }
    }
    for(ll i = 0; i < n; i++){
        if(!visited[arr[i].second]) {
            price += arr[i].first;
            dfs(arr[i].second, visited, path);
        }
    }
    cout << price << endl;
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