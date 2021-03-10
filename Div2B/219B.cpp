#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, d, exp = 10, pow = 1;
    cin >> n >> d;
    ll result = n, curr = 0;
    ll temp = n;
    while(temp % 10 == 9) {curr++; temp /= 10;}
    while(n - (exp - 1) >= 0 && (n - ((n / exp) * exp - 1) >= 0) && (n - ((n / exp) * exp - 1) <= d)){
        if(pow > curr) result = (n / exp) * exp - 1;
        exp *= 10;
        pow++;
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
    return 0;
}