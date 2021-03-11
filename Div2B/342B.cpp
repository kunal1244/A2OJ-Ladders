#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n, m, s, f;
    cin >> n >> m >> s >> f;
    bool dir = true;
    if(s > f) dir = false;
    vector<vector<ll>> arr(m, vector<ll> (3));
    for(ll i = 0; i < m; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    string result;
    ll t = 1, ind = 0;
    while(ind < m && s != f){
        if(arr[ind][0] == t){
            if(s >= arr[ind][1] && s <= arr[ind][2]) result += "X";
            else if(dir){
                if(s + 1 >= arr[ind][1] && s + 1 <= arr[ind][2]) result += "X";
                else {result += "R"; s++;}
            }
            else{
                if(s - 1 >= arr[ind][1] && s - 1 <= arr[ind][2]) result += "X";
                else {result += "L"; s--;}
            }
            ind++;
        }
        else{
            if(dir) {result += "R"; s++;}
            else {result += "L"; s--;}
        }
        t++;
    }
    while(s != f){
        if(dir) {result += "R"; s++;}
        else {result += "L"; s--;}
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