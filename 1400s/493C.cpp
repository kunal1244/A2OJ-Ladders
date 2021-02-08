#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n, m, k, p, q, s, c;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    ll b[m];
    for(int i = 0; i < m; i++) cin >> b[i];
 
    s = 3 * n;
    c = 3 * m;
	sort(a, a + n);
	sort(b, b + m);
	for(int i = 0, j = 0; i < m; i++) {
		while(i + 1 < m && b[i] == b[i + 1]) 
            i++;
		while(j < n && a[j] <= b[i]) 
            j++;
		p = 3 * n - j;
		q = 3 * m - i - 1;
		if(p - q > s - c || p - q == s - c && p > s) {
			s = p;
			c = q;
		}
	}
    cout << s << ":" << c << endl;
    return 0;
}