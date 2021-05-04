#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll q;
    cin >> q;
    for (ll i = 2; i * i <= q; i++){
        if (!(q % i)){
            ll val = q / i;
            for (ll j = 2; j * j <= val; j++) if (val % j == 0){ cout << 1 << endl << i * j << endl; return ; }
            cout << 2 << endl;
            return ;
        }
    }
    cout << 1 << endl << 0 << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    ll flag = 1;
    // cin >> flag;
    while(flag--){
        solve();
    }
    return 0;
}