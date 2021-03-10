#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll sumdigits(ll n){
    ll sum = 0;
    while(n > 0) {sum += n % 10; n /= 10;}
    return sum; 
}

void solve(){
    ll n;
    cin >> n;
    for(ll i = 0; i <= 90; i++){
        ll val = sqrt(n + i * i / 4) - i / 2;
        if(val * (val + sumdigits(val)) == n) {cout << val << endl; return;}
    } 
    cout << -1 << endl;
    return ;
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