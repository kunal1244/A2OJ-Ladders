#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll n, l;
    cin >> n >> l;
    for(ll i = 0; i < n; i++){
        ll temp;
        cin >> temp;
        pq.push(temp);
    }
    ll curr = pq.top();
    double max_diff = pq.top();
    pq.pop();
    while(pq.size()){
        max_diff = max(max_diff, (pq.top() - curr) / 2.0);
        curr = pq.top();
        pq.pop();
    }
    max_diff = max(max_diff, (double) (l - curr));
    cout << fixed << setprecision(9) << max_diff << endl;
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
}