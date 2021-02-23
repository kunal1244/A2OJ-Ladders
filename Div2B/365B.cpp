#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, p2, p1;
    cin >> n;
    if(n < 3) {cout << n << endl; return ;}
    ll max_length = 2, temp_length = 2;
    cin >> p2 >> p1;
    for(ll i = 0; i < n - 2; i++){
        ll temp;
        cin >> temp;
        if(temp == p1 + p2)  temp_length++;
        else{
            max_length = max(max_length, temp_length);
            temp_length = 2;
        }
        p2 = p1;
        p1 = temp;
    }

    max_length = max(max_length, temp_length);
    cout << max_length << endl;

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