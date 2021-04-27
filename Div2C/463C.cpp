#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll arr[2010][2010], dplus[4010], dminus[4010];

ll cellval(ll i, ll j){
    return dplus[i + j] + dminus[2000 + i - j] - arr[i][j];
}

void solve(){
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++){
        for (ll j = 1; j <= n; j++){
            cin >> arr[i][j];
            dplus[i + j] += arr[i][j];
            dminus[2000 + i - j] += arr[i][j];
        }
    }
    pair<int, int> values[2];
    for (ll i = 1; i <= n; i++){
        for (ll j = 1; j <= n; j++){
            ll rem = (i + j) % 2;
            if (cellval(i, j) >= cellval(values[rem].first, values[rem].second)) values[rem] = {i, j};
        }
    }
    cout << cellval(values[0].first, values[0].second) + cellval(values[1].first, values[1].second) << endl;
    cout << values[0].first << " " << values[0].second << " " << values[1].first << " " << values[1].second << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}