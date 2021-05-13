#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

void solve(){
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    map<ll, ll> m;
    for (ll i = 0; i < n; i++) m[sum - arr[i]]++;
    ll power = 0;
    for (auto it : m){
        if (it.second % x){
            power = it.first;
            break;
        }
        m[it.first + 1] += it.second / x;
    }
    ll ans = 1, b = min(sum, power), a = x;
    while (b){
        if (b % 2) ans = (ans * a) % mod;
        a *= a;
        a %= mod;
        b /= 2;
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