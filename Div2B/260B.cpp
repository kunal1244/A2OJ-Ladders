#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(string str){
    ll d, m, y = 0;
    if(str[0] >= '0' && str[0] <= '3' && str[1] >= '0' && str[1] <= '9'){
        d = (str[0] - '0') * 10 + (str[1] - '0');
        if(str[3] >= '0' && str[3] <= '1' && str[4] >= '0' && str[4] <= '9'){
            m = (str[3] - '0') * 10 + (str[4] - '0');
            for(ll i = 6; i < 10; i++){
                if(str[i] >= '0' && str[i] <= '9'){
                    y *= 10;
                    y += str[i] - '0';
                }
                else return false;
            }
        }
        else return false;
    }
    else return false;
    if(!d) return false;
    if(y != 2013 && y != 2014 && y != 2015) return false;
    else{
        if(m > 12) return false;
        else{
            for(ll i = 0; i < 12; i++){
                if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
                    if(d > 31) return false;
                }
                else if(m == 4 || m == 6 || m == 9 || m == 11){
                    if(d > 30) return false;
                }
                else if(m == 2){
                    if(d > 28) return false;
                }
            }
        }
    }
    return true;
}


void solve(){
    string str;
    cin >> str;
    ll n = str.size();
    map<string, ll> mp;
    for(ll i = 0; i < n - 9; i++){
        if(str[i + 2] == '-' && str[i + 5] == '-'){
            string temp = str.substr(i, 10);
            if(check(temp)) mp[temp]++;
        }
    }
    string result; 
    ll val = INT_MIN;
    for(auto i : mp){
        if(i.second > val){
            result = i.first;
            val = i.second;
        }
    }

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