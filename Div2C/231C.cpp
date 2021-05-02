#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    long long n, k, arr[100010], j = 1, ans = 0, maxLength = 0, maxVal = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    sort(arr + 1, arr + n + 1);
    for (int i = 1; i <= n; i++){
        ans += arr[i];
        while ((i - j + 1) * arr[i] - ans > k) ans -= arr[j++];
        if (i - j + 1 > maxLength) maxLength = i - j + 1, maxVal = arr[i];
    }
    cout << maxLength << " " << maxVal << endl;
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