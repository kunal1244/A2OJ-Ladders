#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll toint(char x){
    if(isdigit(x)) return (x - '0');
    else return (x - 'A' + 10);
}

ll getval(string s, ll mult){
    if(!s.size()) return 0;
    ll result = 0, exp = 1;
    for(ll i = s.size() - 1; i >= 0; i--){
        result += toint(s[i]) * exp;
        exp *= mult; 
    }
    return result;
}

void solve(){
    string time;
    cin >> time;
    string hours = "", mins = "";
    ll max_val = 0;
    bool flag = false, hflag = false, mflag = false;
    for(ll i = 0; i < time.size(); i++){
        if(time[i] == ':') {flag = true; continue;}
        if(!flag){
            if(time[i] != '0' || hflag) {hours += time[i]; hflag = true;}
            max_val = max(max_val, toint(time[i]));
        }
        else{
            if(time[i] != '0' || mflag) {mins += time[i]; mflag = true;}
            max_val = max(max_val, toint(time[i]));
        }
    }

    if(hours.size() < 2 && mins.size() < 2 && getval(hours, 1) < 24) {cout << -1 << endl; return ;}

    flag = false;
    for(ll i = max_val + 1; (getval(hours, i) < 24) && (getval(mins, i) < 60); i++){
        flag = true;
        cout << i << " ";
    }
    if(!flag) cout << 0;
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