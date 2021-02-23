#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    vector<ll> first, second;
    ll fval = 0, sval = 0;
    bool last;
    for(ll i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        if(temp > 0) {first.push_back(temp); last = true; fval += temp;}
        else {second.push_back(temp * -1); last = false; sval += temp * -1;}
    }
    ll i = 0, j = 0;
    if(fval < sval){
        cout << "second" << endl;
        return ;
    }
    else if(sval < fval){
        cout << "first" << endl;
        return ;
    }
    while(i < first.size() && j < second.size()){
        if(first[i] < second[j]){
            cout << "second" << endl;
            return ;
        }
        else if(first[i] > second[j]){
            cout << "first" << endl;
            return ;
        }
        i++; j++;
    }
    // cout << first << " " << second << endl;
    if(i < first.size()) cout << "second" << endl;
    else if(j < second.size()) cout << "first" << endl;
    else{
        if(last) cout << "first" << endl;
        else cout << "second" << endl;
    }
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