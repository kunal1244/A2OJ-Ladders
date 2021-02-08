#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    vector<ll> a;
    set<ll> s;
    ll n, k;
    cin >> n >> k;
    a.resize(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    if(s.size() < k) cout << "-1 -1" << endl;
    else{
        s.clear();
        ll l = -1, r = -1;
        for(int i = 0; i < n; i++){
            s.insert(a[i]);
            if(s.size() == k) {r = i; break;}
        }
        s.clear();
        for(int i = r; i >= 0; i--){
            s.insert(a[i]);
            if(s.size() == k) {l = i; break;}
        }
        s.clear();
        cout << l + 1 << " " << r + 1 << endl;
    }
}