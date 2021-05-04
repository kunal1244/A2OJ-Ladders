#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    if(arr[n - 1] == 1){
        for(ll i = 0; i < n - 1; i++) cout << 1 << " ";
        cout << 2 << endl;
        return ;
    }
    cout << 1 << " ";
    for(ll i = 0; i < n - 1; i++) cout << arr[i] << " ";
    cout << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    ll flag = 1;
    // cin >> flag;
    while(flag--){
        solve();
    }
    return 0;
}