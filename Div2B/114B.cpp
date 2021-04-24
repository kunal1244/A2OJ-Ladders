#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool sort_vec(vector<ll> a, vector<ll> b){
    return a.size() < b.size();
}

void solve(){
    ll n, p;
    cin >> n >> p;
    string names[n];
    for(ll i = 0; i < n; i++) cin >> names[i];
    vector<bool> present(n, true);
    vector<vector<ll>> arr(n, vector<ll>(0));
    for(ll i = 0; i < p; i++){
        ll ai, bi;
        string a, b;
        cin >> a >> b;
        for(ll j = 0; j < n; j++){
            if(!a.compare(names[j])) ai = j;
            if(!b.compare(names[j])) bi = j;
        }
        arr[ai].push_back(bi);
        arr[bi].push_back(ai);
    }
    ll result = n;
    sort(arr.begin())
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