#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll m, s;
    cin >> m >> s;
    ll sc = s;
    if(s == 0) {
        if(m == 1) cout << "0 0" << endl; 
        else cout << "-1 -1" << endl; 
        return ;
    }
    else if(s > 9 * m) {cout << "-1 -1" << endl; return ; }
    string maxnum(m, '0');
    maxnum[0] = '1';
    s--;
    if(s <= 8) {
        maxnum[0] += s;
        s = 0;
    }
    else {maxnum[0] = '9'; s -= 8;}
    for(ll i = 1; i < m; i++){
        if(s > 9) {maxnum[i] = '9'; s -= 9;}
        else{
            maxnum[i] += s;
            break;
        }
    }
    string minnum(m, '0');
    minnum[0] = '1';
    sc--;
    for(ll i = m - 1; i > 0; i--){
        if(sc > 9) {minnum[i] = '9'; sc -= 9;}
        else{
            minnum[i] += sc;
            sc = 0;
            break;
        }
    }
    minnum[0] += sc;
    
    cout << minnum << " " << maxnum << endl;
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