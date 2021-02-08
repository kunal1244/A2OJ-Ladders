#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
	
	int ans;
	for(ans = 0; arr[(n - 1) / 2] != x; ans++){
		arr.push_back(x);
        n++;
        sort(arr.begin(), arr.end());
	}
	cout << ans << endl;

    return 0;
}