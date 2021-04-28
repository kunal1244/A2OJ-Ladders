#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int MOD = 1e9 + 7;

int m;
bool weights[11] = {0};
vector<int> result;

bool dfs(int bal, int prev, int mval){
    if (mval == m) return true;
    bool flag = false;
    for (int i = 1; i <= 10; ++i){
        if (weights[i] && bal + i > 0 && prev != i) flag = dfs(- bal - i, i, mval + 1);
        if (flag){ result.push_back(i); return true; }
    }
    return flag;
}

void solve(){
    string s;
    cin >> s >> m;
    for (int i = 0; i < 10; ++i) weights[i + 1] = (s[i] == '1');

    if (dfs(0, 0, 0)){
        cout << "YES" << endl;
        for (int i = m - 1; i >= 0; --i) cout << result[i] << " ";
        cout << endl;
    }
    else cout << "NO" << endl;
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