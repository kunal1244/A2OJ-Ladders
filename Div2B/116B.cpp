#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(vector<string> arr, ll i, ll j, ll n, ll m){
    if(i - 1 >= 0 && arr[i - 1][j] == 'P') return true;
    if(i + 1 < n && arr[i + 1][j] == 'P') return true;
    if(j - 1 >= 0 && arr[i][j - 1] == 'P') return true;
    if(j + 1 >= 0 && arr[i][j + 1] == 'P') return true;
    return false;
}

void solve(){
    ll n, m, result = 0;
    cin >> n >> m;
    vector<string> arr(n, "");
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            if(arr[i][j] == 'W' && check(arr, i, j, n, m)) result++;
        }
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