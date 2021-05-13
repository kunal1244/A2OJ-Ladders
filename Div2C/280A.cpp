#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    long double w, h, a;
    cin >> w >> h >> a;
    if (h > w) swap(h, w);
    if (a > 90) a = 180 - a;
    a = a * acos(-1) / 180;
    cout << fixed << setprecision(8);
    if (!a) cout << h * w;
    else if (a < (2 * atan2(h, w))) cout << ((h * h + w * w) / 2 * (cos(a) - 1) + w * h * sin(a)) / (sin(a) * cos(a));
    else cout << (h * h) / sin(a);
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