#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define PI 3.14159265

void solve(){
    ll n;
    double x, y, d[100005], maxval = -1;
    cin >> n;
    for (ll i = 1; i <= n; i++) cin >> x >> y, d[i] = 180 * atan2(y, x) / PI;
    sort(d + 1, d + n + 1);
    for (ll i = 1; i <= n; i++) maxval = max(maxval, fmod(d[i % n + 1] - d[i] + 360, 360));
    cout << fixed << setprecision(6) << (maxval > 0e-6 ? 360.0 - maxval : 0) << endl;
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