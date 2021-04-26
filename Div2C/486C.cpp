#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, p, a = 0, d, l, r;
    string str;
    cin >> n >> p >> str;
    p--;
    if (p >= n / 2) p = n - p - 1;
    l = 0, r = n / 2 - 1;
    for (ll i = 0; i < n / 2; i++){
        ll d = abs(str[i] - str[n - i - 1]);
        a += min(d, 26 - d);
    }
    while (l < n / 2 && str[l] == str[n - l - 1]) l++;
    while (r >= 0 && str[r] == str[n - r - 1]) r--;
    a += r - l + min(abs(p - l), abs(p - r));
    cout << max(a, (ll) 0);
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