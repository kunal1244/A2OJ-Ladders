#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    ll arr[n], sortedarr[n];
    ll a = -1, b = -1;
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
        sortedarr[i] = arr[i];
    } 
    sort(sortedarr, sortedarr + n);
    for(ll i = 0; i < n; i++){
        if(arr[i] != sortedarr[i]){
            if(a == -1) a = i;
            else if(b == -1) b = i;
            else {cout << "NO" << endl; return ;}
        }
    } 
    if((a == -1 && b == -1) || (arr[a] == sortedarr[b] && arr[b] == sortedarr[a])) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}