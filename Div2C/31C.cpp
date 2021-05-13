#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> arr(n);
    for (auto &x : arr) cin >> x.first >> x.second;
    vector<ll> s(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < n; j++){
            if (arr[i].first < arr[j].first && arr[i].second > arr[j].first) s[i]++, s[j]++, sum++;
        }
    }
    vector<ll> ans;
    for (ll i = 0; i < n; i++) if (s[i] == sum) ans.push_back(i + 1); 
    cout << ans.size() << endl;
    for (auto &x : ans) cout << x << ' ';
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