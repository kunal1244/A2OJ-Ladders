#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> counts[100010];

int main(){
    ll n, temp;
    cin >> n;
    set<ll> dist_vals;
    for(int i = 0; i < n; i++){
        cin >> temp;
        dist_vals.insert(temp);
        counts[temp].push_back(i);
    }

    ll count = 0;
    vector<pair<ll, ll>> res;

    for (set<ll>::iterator it = dist_vals.begin(); it != dist_vals.end(); ++it){ 
        ll size = counts[*it].size();
        if(size == 1){
            count++;
            res.push_back({*it, 0});
        }
        else if(size > 1){
            ll i = 1, diff = counts[*it][1] - counts[*it][0];
            bool flag = false;
            while(i < size){
                if(counts[*it][i] - counts[*it][i - 1] != diff){
                    flag = true;
                    break;
                }
                i++;
            } 
            if(!flag){
                count++;
                res.push_back({*it, diff});
            }
        }
    } 

    ll num = res.size();
    cout << count << endl;
    for(int i = 0 ; i < num; i++){
        cout << res[i].first << " " << res[i].second << endl;
    }
    
}