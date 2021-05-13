#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll ch[3000], cnt = 0;
    ll a, b, m;
    cin >> a >> b >> m;
    ch[1] = m;
    for (ll i = a; i < (1 + a + b); i += (a - 1)){
        ch[i]++;
        ch[i + 1] += m - 1;
        if (m > 1) i++;
    }
    for (ll i = 1; i < (1 + a + b); i++) cnt += ch[i];
    cout << cnt << endl;
    for (ll i = 1; i < (1 + a + b); i++) for (ll j = 0; j < ch[i]; j++) cout << i << " "; 
    cout << endl;
}

int main()
    {
        std::ios_base::sync_with_stdio(NULL);
        cin.tie(NULL);
        cout.tie(NULL);
        ll t = 1;
        // cin >> t;
        while (t--)
        {
            solve();
        }
        return 0;
}