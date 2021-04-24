#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    double x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    double cdist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double temp = r1;
    r1 = max(temp, r2);
    r2 = min(temp, r2);
    cout << fixed << setprecision(7);
    if(r1 + r2 < cdist) cout << (cdist - r1 - r2) / 2 << endl;
    else if(r1 > r2 + cdist) cout << (r1 - cdist - r2) / 2 << endl;
    else cout << 0.0000000 << endl;
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