#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    vector<ll> count(10, 0);
    ll sum = 0;
    for(ll i = 0; i < n; i++) {ll temp; cin >> temp; count[temp]++; sum += temp;}
    if(!count[0]) {cout << -1 << endl; return ;}
    if(sum % 3 == 1){
        if(count[1]) count[1]--;
        else if(count[4]) count[4]--;
        else if(count[7]) count[7]--;
        else{
            ll temp = 0;
            while(count[2] && temp < 2) {count[2]--; temp++;}
            while(count[5] && temp < 2) {count[5]--; temp++;}
            while(count[8] && temp < 2) {count[8]--; temp++;}
            
            if(temp < 2) {cout << -1 << endl; return ;}
        }
    }
    else if(sum % 3 == 2){
        if(count[2]) count[2]--;
        else if(count[5]) count[5]--;
        else if(count[8]) count[8]--;
        else{
            ll temp = 0;
            while(count[1] && temp < 2) {count[1]--; temp++;}
            while(count[4] && temp < 2) {count[4]--; temp++;}
            while(count[7] && temp < 2) {count[7]--; temp++;}
            
            if(temp < 2) {cout << -1 << endl; return ;}
        }
    }
    bool flag = false;
    for(ll i = 1; i <= 9; i++) if(count[i]) {flag = true; break;}
    if(!flag) {cout << 0 << endl; return ;}
    string result = "";
    for(ll i = 9; i >= 0; i--){
        string temp(count[i], i + '0');
        result += temp;
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