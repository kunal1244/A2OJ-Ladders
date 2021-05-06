#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    bool arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];
    for(ll i = 1; i <= n / 3; i++){
        if(!(n % i)){
            for(ll j = 0; j < i; j++){
                bool flag = true;
                for(ll k = j; k < n; k += i) if(!arr[k]){ flag = false; break;}
                if(flag) {cout << "YES" << endl; return ;} 
            }
        }
    }
    cout << "NO" << endl;
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