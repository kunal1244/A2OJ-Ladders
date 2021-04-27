#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string str;
    cin >> str;
    bool check[str.size()];
    memset(check, true, sizeof(check));
    bool flag = false;
    ll streak = 1;
    char prev = str[0];
    for(ll i = 1; i < str.size(); i++){
        if(prev == str[i]){
            if(flag) {
            	if(streak == 1) flag = false;
            	check[i] = false;
            }
            else if(streak > 1) check[i] = false;
            else flag = true;
            streak++;
        }
        else{
        	if(flag && streak == 1) flag = false;
            streak = 1;
            prev = str[i];
        }
    }
    for(ll i = 0; i < str.size(); i++){
        if(check[i]) cout << str[i];
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