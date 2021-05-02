#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    if(n < 3) cout << n << endl;
    else if(n % 2) cout << n * (n - 1) * (n - 2) << endl;
    else if(n % 3) cout << n * (n - 1) * (n - 3) << endl;
    else cout << (n - 1) * (n - 2) * (n - 3) << endl;
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