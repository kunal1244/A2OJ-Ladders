#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, x, y, x1, y1, r, a, b, dx[] = {-1, -1, -1, 0, 1, 1, 1, 0}, dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
    queue<pair<ll, ll>> q;
    map<pair<ll, ll>, ll> mp;
    cin >> x >> y >> x1 >> y1 >> n;
    while (n--){
        cin >> r >> a >> b;
        for (ll i = a; i <= b; i++) mp[pair<ll, ll>(r, i)] = -1;
    }
    mp[{x, y}] = 0, mp[{x1, y1}] = -1;
    q.push({x, y});
    while (q.size()){
        pair<ll, ll> top = q.front();
        q.pop();
        for (ll i = 0; i < 8; i++){
            pair<ll, ll> temp = pair<ll, ll>(top.first + dx[i], top.second + dy[i]);
            if (mp[temp] == -1) mp[temp] = mp[top] + 1, q.push(temp);
        }
    }
    cout << mp[{x1, y1}] << endl;
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