#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll arr[100010], dp[100010];

int main(){
    memset(arr, 0, sizeof(arr)); 
    memset(dp, 0, sizeof(dp)); 
    dp[0] = 0;   
    ll n, temp;
    cin >> n;
    ll max_val = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> temp;
        arr[temp]++;
        max_val = max(temp, max_val);
    }
    dp[1] = arr[1];
    for(int i = 2; i <= max(max_val, n) ; i++){
        dp[i] = max(dp[i - 1], dp[i - 2] + arr[i] * i);
    }
    cout << dp[max(max_val, n)] << endl;

}