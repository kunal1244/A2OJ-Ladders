#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    int n;
    cin >> n;
    double arr[n][n];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> arr[i][j];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) cout << (arr[i][j] + arr[j][i]) / 2 << " ";
        cout << endl;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) cout << (arr[i][j] - arr[j][i]) / 2 << " ";
        cout << endl;
    }
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