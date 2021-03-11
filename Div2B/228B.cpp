#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll na, ma, nb, mb;
    cin >> na >> ma;
    ll a[na][ma];
    for(ll i = 0; i < na; i++){
        string temp;
        cin >> temp;
        for(ll j = 0; j < ma; j++) a[i][j] = temp[j] - '0';
    }
    cin >> nb >> mb;
    ll b[nb][mb];
    for(ll i = 0; i < nb; i++){
        string temp;
        cin >> temp;
        for(ll j = 0; j < mb; j++) b[i][j] = temp[j] - '0';
    }
    ll result = -1;
    ll rx = 0, ry = 0;
    for(ll x = -50; x <= 50; x++){
        for(ll y = -50; y <= 50;y++){
            ll temp = 0;
            for(ll i = 0; i < na; i++){
                for(ll j = 0; j < ma; j++){
                    if(i + x >= 0 && i + x < nb && j + y >= 0 && j + y < mb) temp += a[i][j] * b[i + x][j + y];
                }
            }
            if(temp > result){
                result = temp;
                rx = x;
                ry = y;
            }
        }
    }
    cout << rx << " " << ry << endl;
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