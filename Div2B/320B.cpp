#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void dfs(vector<pair<ll, ll>> arr, ll i, vector<bool> &visited){
    visited[i] = true;
    for(ll x = 0; x < arr.size(); x++){
        if(!visited[x]) if((arr[i].first > arr[x].first && arr[i].first < arr[x].second) || (arr[i].second > arr[x].first && arr[i].second < arr[x].second)) dfs(arr, x, visited);
    }
}

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> arr;
    for(ll i = 0; i < n; i++){
        ll flag, l, r;
        cin >> flag >> l >> r;
        if(flag == 1) arr.push_back({l, r});
        else if(flag == 2){
            vector<bool> visited(arr.size(), false);
            dfs(arr, l - 1, visited);
            if(visited[r - 1]) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
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