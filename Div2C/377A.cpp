#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll n, m, k, s;
char arr[500][500];
bool visited[500][500];
ll h[4] = {-1, 0, 0, 1}, v[4] = {0, -1, 1, 0};

bool check(ll x, ll y){
    if(x < 0 || y < 0 || x >= n || y >= m) return false;
    return true;
}

void dfs(ll x, ll y){
    if(!s) return ;
    s--;
    visited[x][y] = true;
    for(ll i = 0; i < 4; i++){
        ll xc = x + h[i], yc = y + v[i];
        if(check(xc, yc) && arr[xc][yc] != '#' && !visited[xc][yc]) dfs(xc, yc);
    }
}


void solve(){
    ll x, y;
    s = 0;
    memset(visited, false, sizeof(visited));
    bool flag = false;
    cin >> n >> m >> k;
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> arr[i][j]; 
            if(arr[i][j] == '.') {
                if(!flag) flag = true, x = i, y = j;
                s++;
            }
        }
    }
    s -= k;
    dfs(x, y);
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            if(arr[i][j] == '.' && !visited[i][j]) cout << 'X';
            else cout << arr[i][j];
        }
        cout << endl;
    }
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