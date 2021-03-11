#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> vals;

bool comp(string a, string b){
    if(a.size() == b.size()){
        return a > b;
    }
    return a.size() > b.size();
}

void create(ll n, ll fc, ll sc, string temp){
    if(fc == n / 2 && sc == n / 2 && temp.size() == n) {vals.push_back(stoi(temp)); return ;}
    if(fc < n / 2){
        temp.push_back('4');
        create(n, fc + 1, sc, temp);
        temp.pop_back();
    }
    if(sc < n / 2){
        temp.push_back('7');
        create(n, fc, sc + 1, temp);
        temp.pop_back();
    }
}

void solve(){
    ll input;
    cin >> input;
    for(ll i = 2; i <= 8; i += 2) create(i, 0, 0, "");
    vals.push_back(4444477777);
    ll l = 0, r = vals.size();
    ll res;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(vals[mid] == input) {cout << vals[mid] << endl; return ;}
        else if(vals[mid] > input) {res = vals[mid]; r = mid - 1;}
        else l = mid + 1;
    }

    cout << res << endl;
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