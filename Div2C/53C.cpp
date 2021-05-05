#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll l = 1, r, n;
    cin >> n;
    r = n;
    while(l < r){
        cout << l++ << " " << r-- << " ";
    }
    if(n % 2) cout << l;
    cout << endl;
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