#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string s[1010], t;
    cin >> t;
    ll ans = 0, index = 0;
    for (ll i = 0; i < t.size(); i++){
        if (t[i] == '.'){
            for (ll j = 0; j < index; j++) if (s[j] == s[index]) ans++;
            s[index] = "";
            index--;
        }
        else if (t[i] == ':' || t[i] == ',') index++;
        else s[index] += t[i];
    }
    cout << ans << endl;
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