#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int x[100010];
 
ll gcd(ll A, ll B) {
    if (B == 0)
        return A;
    return gcd(B, A % B);
}

int main() {
    int n;
    ll sum1 = 0, sum2 = 0, sumBefore = 0, sumtot = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> x[i];
        sum1 += x[i];
    }
    sort(x + 1, x + n + 1);
    for (int i = 1; i <= n; ++i) {
        sum2 += 1LL * x[i] * (i - 1) - sumBefore;
        sumBefore += x[i];
    }
    sumtot = sum1 + 2 * sum2;
    ll _gcd = gcd(sumtot, n);
    cout << sumtot / _gcd << " " << n / _gcd << endl;
    return 0;
}