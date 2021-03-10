#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll sum, limit;
    cin >> sum >> limit;
    map<ll, vector<ll>> mp;
    ll maxp = 0;
    for(ll i = 1; i <= limit; i++){
        ll temp = i;
        while(!(temp % 2)) temp /= 2;
        maxp += i / temp;
        mp[i / temp].push_back(i);
    }
    if(sum > maxp) {cout << -1 << endl; return ;}
    vector<pair<ll, vector<ll>>> arr;
    for(auto i: mp){
        arr.push_back({i.first, i.second});
    }
    
    sort(arr.rbegin(), arr.rend());

    vector<ll> result;

    for(ll i = 0; i < arr.size() && sum; i++){
        while(arr[i].second.size() && sum - arr[i].first >= 0){
            sum -= arr[i].first;
            result.push_back(arr[i].second[0]);
            arr[i].second.erase(arr[i].second.begin());
        }
    }

    cout << result.size() << endl;
    for(ll i = 0; i < result.size(); i++) cout << result[i] << " ";
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