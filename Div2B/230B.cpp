#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 1000001
bool prime[MAX];


void solve(){
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        ll val = (ll) sqrt(temp);
        if(temp != 1 && prime[val] && val * val == temp) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
 
int main(){
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= MAX; p++) if (prime[p]) for (int i = p * p; i <= MAX; i += p) prime[i] = false;
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