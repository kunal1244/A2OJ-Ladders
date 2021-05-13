#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    bool v[105];
    char s1[105], s2[105], t[100][105], w[5];
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++){
        cin >> t[i];
        for (ll j = 0; t[i][j]; j++) t[i][j] = tolower(t[i][j]);
    }
    cin >> s1 >> w;
    w[1] = w[0] == 'a' ? 'b' : 'a';
    for (ll i = 0; s1[i]; i++){
        for (ll j = 0; j < n; j++){
            ll k = 0;
            for (; t[j][k]; k++) if (tolower(s1[i + k]) != t[j][k]) break;
            if (t[j][k]) continue;
            for (k = 0; t[j][k]; k++) v[i + k] = 1;
        }
    }
    for (ll i = 0; s1[i]; i++){
        if (v[i]){
            if (tolower(s1[i]) == w[0]) s2[i] = w[1];
            else s2[i] = w[0];
        }
        else s2[i] = s1[i];
        if (isupper(s1[i])) s2[i] = toupper(s2[i]);
    }
    cout << s2 << endl;
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