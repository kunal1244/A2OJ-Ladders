#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, sum = 0, imp = 0, high, low, hi = 0, li = 0;
    cin >> n;
    ll v[n];
    for (ll i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    if (sum % n){
        cout << "Unrecoverable configuration." << endl;
        return ;
    }
    sum /= n;
    high = sum;
    low = sum;
    for (ll i = 0; i < n; i++){
        if (v[i] > high){
            high = v[i];
            hi = i;
        }
        if (v[i] < low){
            low = v[i];
            li = i;
        }
        if (v[i] != sum)
            imp++;
    }
    if (imp == 0) cout << "Exemplary pages." << endl;
    else if (imp == 2) cout << (high - low) / 2 << " ml. from cup #" << li + 1 << " to cup #" << hi + 1 << "." << endl;
    else cout << "Unrecoverable configuration." << endl;
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