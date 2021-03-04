#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, x0, y0, x, y, k = 0;
    cin >> n >> x0 >> y0;
    set<double> slopes;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(x != x0) slopes.insert(((double) (y - y0) )/ (x - x0) );
        else k = 1;
    }
    cout << slopes.size() + k << endl;
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