#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll s, k;
    cin >> s >> k;
    vector<ll> arr(2, 1);
    for(ll i = 2; i <= k && arr[i - 1] <= 1000000000; i++) arr.push_back(arr[i - 1] * 2);


    if(arr[arr.size() - 1] <= 1000000000) {
        ll sum = arr[k] * 2, i = 0;
        while(sum > 0 && sum <= 1000000000){
            arr.push_back(sum - arr[i]);
            sum = (sum - arr[i++]) * 2;
        }
    }

    arr.insert(arr.begin(), 0);
    ll l = 0, r = arr.size();

    ll ind;
    while(l <= r){
        ll m = l + (r - l) / 2;
        if(arr[m] > s) r = m - 1;
        else{
            ind = m;
            l = m + 1;
        }
    }

    vector<ll> answer;

    for(ll i = ind; i >= 0; i--){
        if(s >= arr[i]) {answer.push_back(arr[i]); s -= arr[i];}
    }

    cout << answer.size() << endl;
    for(ll i = answer.size() - 1; i >= 0; i--) cout << answer[i] << " ";
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