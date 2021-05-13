#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string s[10];
    ll l[10];
    for (ll i = 1; i <= 6; i++) cin >> s[i];
    sort(s + 1, s + 7);
    vector<string> ans;
    ll cnt = 0;
    do{
        for (ll i = 1; i <= 6; i++) l[i] = s[i].size();
        if (l[5] != l[1] + l[3] - 1) continue;
        if (l[2] != l[4] + l[6] - 1) continue;
        if (s[1][0] != s[6][0]) continue;
        if (s[1].back() != s[2][0]) continue;
        if (s[2].back() != s[3][0]) continue;
        if (s[3].back() != s[4].back()) continue;
        if (s[4][0] != s[5].back()) continue;
        if (s[5][0] != s[6].back()) continue;
        if (s[2][l[6] - 1] != s[5][l[1] - 1]) continue;

        ll h = l[2], w = l[5];
        vector<string> cur(h, string(w, '.'));

        for (ll i = 0; i < l[1]; i++) cur[0][i] = s[1][i];
        for (ll i = 0; i < l[2]; i++) cur[i][l[1] - 1] = s[2][i];
        for (ll i = 0; i < l[3]; i++) cur[h - 1][l[1] - 1 + i] = s[3][i];
        for (ll i = 0; i < l[4]; i++) cur[l[6] - 1 + i][w - 1] = s[4][i];
        for (ll i = 0; i < l[5]; i++) cur[l[6] - 1][i] = s[5][i];
        for (ll i = 0; i < l[6]; i++) cur[i][0] = s[6][i];

        if (ans.empty() || cur < ans) ans = cur;
    } while (next_permutation(s + 1, s + 7));
    if (ans.empty()) cout << "Impossible" << endl;
    for (string s : ans) cout << s << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}