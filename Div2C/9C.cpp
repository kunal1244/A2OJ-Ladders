#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll n, result = 0;

void rec_check(ll x){
    if (x > n) return;
    rec_check(x * 10);
    rec_check(x * 10 + 1);
    result++;
}

void solve(){
    cin >> n;
    rec_check(1);
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
    return 0;
}