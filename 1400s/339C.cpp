#include <bits/stdc++.h>
#define pb push_back
 
using namespace std;
 
int n;
string s;
vector <int> v;
int ans[1009];
int pass[15][1009][15];
int q;
 
void solve(int ab, int h, int c){
    if(h == n){
        q = 1;
    }
    if(q == 0 && pass[ab][h][c] != 5){
        pass[ab][h][c] = 5;
        for(int k = 0; k < v.size(); k++){
            if(v[k] > ab && v[k] != c && q == 0){
                ans[h + 1] = v[k];
                solve(v[k] - ab, h + 1, v[k]);
            }
        }
    }
}
 
int main(){
 
    cin >> s;
    cin >> n;
    for(int i = 0; i < 10; i++){
        if(s[i] == '1'){
            v.pb(i + 1);
        }
    }
 
    for(int i = 0; i < v.size(); i++){
        ans[1] = v[i];
        solve(v[i], 1, v[i]);
        if(q == 1){
            break;
        }
    }
    if(q == 1){
        cout << "YES" << endl;
        for(int i = 1; i <= n; i++){
            cout << ans[i] << ' ';
        }
        cout << endl;
    }
    else{
        cout << "NO" << endl;
    }
 
    return 0;
}
 