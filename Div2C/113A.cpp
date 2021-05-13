#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string s, c[6] = {"lios", "liala", "etr", "etra", "initis", "inites"};
    bool flag = true;
    ll m = 0, n = 0, l = -2, val = 0;
    while (cin >> s){
        if (flag){
            m++;
            val = -1;
            for (ll x = 0; x < 6; x++){
                if (c[x].size() <= s.size()){
                    string ss(s, s.size() - c[x].size());
                    if (ss == c[x]){ val = x; break; }
                }
            }
            if (val == 2 || val == 3) n++;
            if (val == -1 || (l >= 0 && val % 2 != l % 2) || val < l) flag = false;
            else l = val;
        }
    }
    if (flag && (n == 1 || m == 1)) cout << "YES" << endl;
    else cout << "NO" << endl;
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