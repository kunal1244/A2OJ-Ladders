#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    set<ll> s, ans;
    ll n, x;
    cin >> n;
    for (ll i = 0; i < n; i++){
        cin >> x;
        set<ll> t;
        s.insert(x);
        for (auto j : s) t.insert(j | x), ans.insert(j | x);
        s = t;
    }
    cout << ans.size() << endl;
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