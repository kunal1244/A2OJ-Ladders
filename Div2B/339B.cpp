#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m;
    cin >> n >> m;
    ll current = 1, result = 0;
    for(ll i = 0; i < m; i++){
        ll temp;
        cin >> temp;
        if(temp > current) result += temp - current;
        else if(temp < current) result += temp + n - current;
        current = temp;
    }
    cout << result << endl;
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
}