#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string val;
    cin >> val;
    bool neg = false;
    if(val[0] == '-') {neg = true; val.erase(val.begin());} 
    string intp = "", decp = "";
    bool flag = true;
    for(ll i = 0; i < val.size(); i++){
        if(flag){
            if(val[i] != '.') intp += val[i];
            else flag = false;
        }
        else{
            if(decp.size() < 2) decp += val[i];
            else break;
        }
    }
    if(intp.size() > 3){
        for(ll i = intp.size() - 3; i >= 0; i -= 3){
            intp.insert(intp.begin() + i, ',');
        }
        if(intp[0] == ',') intp.erase(intp.begin());
    }
    while(decp.size() < 2) decp += "0";
    string result = "";
    if(neg) result += "(";
    result += "$";
    result += intp;
    result += ".";
    result += decp;
    if(neg) result += ")";
    cout << result << endl;
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