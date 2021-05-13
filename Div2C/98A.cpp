#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll f[7];
    char a[7];
    cin >> a + 1;
    sort(a + 1, a + 7);
    ll l = 1;
    for (ll i = 1; i <= 6; i++) f[i] = 1;
    f[1] ++;
    for (ll i = 2; i <= 6; i++){
        if (a[i] == a[i - 1]) f[l] ++;
        else f[++l] ++;
    }
    ll x = f[1] * f[2] * f[3] * f[4] * f[5] * f[6];
    if (x == 7) cout <<  1;
    if (x == 12) cout <<  1;
    if (x == 15) cout <<  2;
    if (x == 16) cout <<  2;
    if (x == 20) cout <<  2;
    if (x == 24) cout <<  3;
    if (x == 27) cout <<  6;
    if (x == 32) cout <<  5;
    if (x == 36) cout <<  8;
    if (x == 48) cout <<  15;
    if (x == 64) cout <<  30;
    cout << endl;
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