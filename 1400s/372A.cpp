#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll r = n - 1, l = n - 2, count = 0;
    while(l > -1){
        if(2 * arr[l] <=  arr[r]){
            r--; count++;
        }
        l--;
    }
    cout << n - min(n / 2, count) << endl;
}