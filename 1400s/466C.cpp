#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
const int N = 1e6 + 7;
ll a[N], n;
 
int main()
{
	cin >> n;
	for (ll i = 1; i <= n; i++)
		cin >> a[i], a[i] += a[i - 1];
	if (a[n] % 3 != 0) cout << 0 << endl;
	else{
		ll ans = 0, seen = 0;
		for (ll i = 1; i < n; i++)
		{
			if (a[i] == (2 * a[n] / 3)) ans += seen;
			if (a[i] == (a[n] / 3)) seen++;
		}
		cout << ans << endl;
	}
 
	return 0;
}
