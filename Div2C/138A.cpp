#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string s[10009];
    ll n, k;
    string tp[4] = {"aaaa", "aabb", "abab", "abba"};
    cin >> n >> k;
    for (ll i = 0; i < 4 * n; i++){
        string str;
        cin >> str;
        ll num = 0;
        for (ll j = str.size() - 1; j >= 0; j--){
            if (strchr("aeiou", str[j])) num++;
            s[i].push_back(str[j]);
            if (num == k) break;
        }
        if (num < k) {cout << "NO" << endl; return ;}
    }
    for (ll i = 0; i < 4; i++){
        bool flag = true;
        for (ll j = 0; j < n && flag; j++)
            for (ll x = 0; x < 4 && flag; x++)
                for (ll y = x + 1; y < 4 && flag; y++)
                    if (tp[i][x] == tp[i][y] && s[j * 4 + x] != s[j * 4 + y]) flag = false;
        if (flag) { cout << tp[i] << endl; return ; }
    }
    cout << "NO" << endl;
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