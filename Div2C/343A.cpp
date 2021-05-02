#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll a, b, ans = 0, rem;
    cin >> a >> b;
    while (b) ans += a / b, rem = a % b, a = b, b = rem;
    cout << ans << endl;
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