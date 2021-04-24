#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll a[101];
    ll n, i, x0;
    double b, s, min = INT_MAX;
    cin >> n >> b >> s;
    for (i = 0; i < n; i++) cin >> a[i];
    double x, y;
    cin >> x >> y;
    for (i = 1; i < n; i++){
        double val = sqrt((a[i] - x) * (a[i] - x) + y * y) / s + a[i] / b;
        if (val <= min){ min = val; x0 = i; }
    }
    cout << x0 + 1 << endl;
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