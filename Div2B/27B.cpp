#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin >> n;
    ll total = n * (n - 1) / 2 - 1;
    ll input[total][2];
    vector<ll> arr(n, 0);
    for(ll i = 0; i < total; i++){
        ll a, b;
        cin >> a >> b;
        input[i][0] = a;
        input[i][1] = b;
        arr[a - 1]++;
        arr[b - 1]++;
    }
    ll a = -1, b = -1;
    for(ll i = 0; i < n; i++){
        if(arr[i] != n - 1){
            if(a == -1) a = i + 1;
            else {b = i + 1; break;}
        }
    }
    vector<ll> a1, a2, b1, b2;
    for(ll i = 0; i < total ; i++){
        if(input[i][0] == a) a1.push_back(input[i][1]);
        if(input[i][1] == a) a2.push_back(input[i][0]);
        if(input[i][0] == b) b1.push_back(input[i][1]);
        if(input[i][1] == b) b2.push_back(input[i][0]);
    }
    
    set<int> s(b2.begin(), b2.end());
    for(ll i = 0; i < a1.size(); i++){
        if(s.count(a1[i])) {cout << a << " " << b << endl; return;}
    }

    set<int> t(a2.begin(), a2.end());
    for(ll i = 0; i < b1.size(); i++){
        if(t.count(b1[i])) {cout << b << " " << a << endl; return;}
    }

    cout << a << " " << b << endl;
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