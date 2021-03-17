#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m;
    cin >> n >> m;
    ll radius = 1, dir = 0, mid = (m + 1) / 2;
    while(n--){
        if(dir == 0) {cout << mid << endl; if(m % 2) dir = -1; else dir = 1; continue;}
        ll val = mid + dir * radius;
        if(val >= 1 && val <= m) {
            cout << mid + dir * radius << endl;
        }
        else n++;

        if(radius > mid - 1 && radius > m - mid) {radius = 1; dir = 0;}

        if(dir == -1) {dir = 1; if(m % 2 == 0) radius++;}
        else if(dir == 1) {dir = -1; if(m % 2) radius++;}
    }
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