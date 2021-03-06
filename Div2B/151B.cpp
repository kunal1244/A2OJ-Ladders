#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    ll maxt = INT_MIN, maxp = INT_MIN, maxc = INT_MIN;
    vector<pair<string, vector<ll>>> mp;
    while(n--){
        ll x;
        string name;
        cin >> x >> name;
        ll t = 0, p = 0, c = 0;
        while(x--){
            string num;
            cin >> num;
            bool eflag = true, gflag = true;
            ll lastdigit = num[0] - '0';
            for(ll i = 1; i < 8; i++){
                if(num[i] != '-'){
                    ll digit = num[i] - '0';
                    if(digit != lastdigit) {
                        eflag = false; 
                        if(digit >= lastdigit) gflag = false;
                    }
                    else gflag = false;
                    lastdigit = digit;
                }
            }
            if(eflag) t++;
            else if(gflag) p++;
            else c++;  
        }
        maxt = max(maxt, t);
        maxp = max(maxp, p);
        maxc = max(maxc, c);
        vector<ll> temp(3);
        temp[0] = t; temp[1] = p; temp[2] = c;
        mp.push_back({name, temp});
    }

    vector<string> tnames, pnames, cnames;
    for(auto i: mp){
        if(i.second[0] == maxt) tnames.push_back(i.first);
        if(i.second[1] == maxp) pnames.push_back(i.first);
        if(i.second[2] == maxc) cnames.push_back(i.first);
    }
    
    string tstr = "", pstr = "", cstr = "";

    for(ll i = 0; i < tnames.size(); i++) tstr += " " + tnames[i] + ",";
    for(ll i = 0; i < pnames.size(); i++) pstr += " " + pnames[i] + ",";
    for(ll i = 0; i < cnames.size(); i++) cstr += " " + cnames[i] + ",";
    if(tstr.size()) tstr.pop_back();
    if(pstr.size()) pstr.pop_back();
    if(cstr.size()) cstr.pop_back();
    cout << "If you want to call a taxi, you should call:" << tstr << "." << endl;
    cout << "If you want to order a pizza, you should call:" << pstr  << "." << endl;
    cout << "If you want to go to a cafe with a wonderful girl, you should call:" << cstr << "." << endl;
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