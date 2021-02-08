#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n, a = 0, b = 0;
    vector<pair<ll, ll>> odds;
    cin >> n;
    for(int i = 0; i < n; i++){
        ll ta, tb;
        cin >> ta;
        if(ta % 2) a++;
        cin >> tb;
        if(tb % 2) b++;
        if((ta + tb) % 2) odds.push_back(make_pair(a, b));
    }
    if(!(a % 2) && !(b % 2)){
        cout << 0 << endl;
    }
    else if(a % 2 && b % 2){
        int flag = 0;
        for(int i = 0; i < odds.size(); i++){
            if((odds[i].first + odds[i].second) % 2){
                flag = 1;
            }
        }
        if(!flag) cout << -1 << endl;
        else cout << 1 << endl;
    }
    else{
        cout << -1 << endl;
    }

}