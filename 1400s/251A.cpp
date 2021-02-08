#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n, d;
    cin >> n >> d;
    ll arr[n];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll count = 0, j = 0, i = 0;
    while(j < n){
        if(arr[j] - arr[i] <= d){
            count += (j - i - 1) * (j - i) / 2;
            j++;
        }
        else{
            i++;
        }
    }
    cout << count << endl;
}