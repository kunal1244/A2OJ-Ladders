#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    int n;
    cin >> n;
    int arr[6] = {0};
    for (int i = 1; i <= n; i++){
        int a, b;
        cin >> a >> b;
        arr[a]++;
        arr[b]++;
    }
    for (int i = 1; i <= 5; i++){
        if (arr[i] != 2){
            cout << "WIN" << endl;
            return ;
        }
    }
    cout << "FAIL" << endl;
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