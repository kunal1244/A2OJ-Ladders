#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string pops[3]={"popStack", "popQueue", "popFront"}, pushes[3]={"pushStack", "pushQueue", "pushFront"};

void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    priority_queue<pair<ll, ll>> q;
    vector<string> ans(n);
    vector<ll> vals(n);
    for(ll i = 0; i < n; i++){
        if(arr[i]) q.push({arr[i],i});
        else{
			for(ll j = 0; j < 3;j++){
				if(q.empty()) break;
				ans[q.top().second] = pushes[j];
				q.pop();
				vals[i]++;
			}
			while(q.size()) q.pop();
        }
    }

    for(ll i = 0; i < n; i++){
        if(!arr[i]){
			cout<< vals[i];
			for(ll j = 0; j < vals[i]; j++) cout << " " << pops[j];
			cout << endl;
        }
		else{
            if(ans[i].empty())cout << "pushBack" << endl;
            else cout << ans[i] << endl;
        }
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