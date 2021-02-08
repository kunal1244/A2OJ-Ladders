#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ll n, m, temp;
    cin >> n >> m;
    pair<ll, ll> arr[n];
    ll res[m];
    set<ll> distinct;
    for(ll i = 0; i < n; i++){
        cin >> arr[i].first;
        arr[i].second = 0;
    }
    for(ll i = n - 1; i >= 0; i--){
        if(!distinct.count(arr[i].first)) distinct.insert(arr[i].first);
        arr[i].second = distinct.size();
    }  
    for(ll i = 0; i <  m; i++){
        cin >> temp;
        res[i] = arr[temp - 1].second;
    }
    for(int i = 0; i < m; i++){
        cout << res[i] << endl;
    }
    return 0;
}