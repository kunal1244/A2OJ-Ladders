#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll r, g, b;
    cin >> r >> g >> b;
    cout << min(min(min(r + b, g + b), r + g), (r + g + b) / 3);
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