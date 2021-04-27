#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll n, m, k, dir_flag = 1;

void next_point(ll &x, ll &y){
    if(dir_flag){
        if(y < m) y++;
        else{
            x++;
            dir_flag = 0;
        }
    }
    else{
        if(y > 1) y--;
        else{
            x++;
            dir_flag = 1;
        }
    }
}

void solve(){
    cin >> n >> m >> k;
    ll x = 1, y = 1;
    for(ll i = 0; i < k - 1; i++){
        cout << 2 << " ";
        cout << x << " " << y << " ";
        next_point(x, y);
        cout << x << " " << y << endl;
        next_point(x, y);
    }
    cout << n * m - 2 * (k - 1) << " ";
    for(ll i = 0; i < n * m - 2 * (k - 1); i++){
        cout << x << " " << y << " ";
        next_point(x, y);
    }
    cout << endl;
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