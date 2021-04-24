#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll n, m, x[3000], y[3000], cnt;
char s[50][50];

bool check(int x, int a1, int b1, int y, int a2, int b2){
    for (int i = min(a1, b1); i <= max(a1, b1); i++) if (s[x][i] != 'B') return false;
    for (int i = min(a2, b2); i <= max(a2, b2); i++) if (s[i][y] != 'B') return false;
    return true;
}

void solve(){
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        for (int j = 0; j < m; j++) if (s[i][j] == 'B') x[++cnt] = i, y[cnt] = j;
    }
    for (int i = 1; i < cnt; i++){
        for (int j = i + 1; j <= cnt; j++) {
            if (check(x[i], y[i], y[j], y[j], x[i], x[j])) continue;
            if (check(x[j], y[i], y[j], y[i], x[i], x[j])) continue;
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
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