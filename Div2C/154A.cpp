#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string input;
    ll k;
    cin >> input >> k;
    ll ans = 0;
    while(k--){
        char a, b;
        cin >> a >> b;
        ll ac = 0, bc = 0;
        for (ll i = 0; i <= input.size(); i++){
            if (input[i] == a) ac++;
            else if (input[i] == b) bc++;
            else ans += min(ac, bc), ac = 0, bc = 0;
        }
    }
    cout << ans << endl;
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