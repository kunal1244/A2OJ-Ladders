#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string s, t;
    cin >> s >> t;
    if(t.size() > s.size()) cout << "need tree" << endl;
    else if(t.size() == s.size()){
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s != t) cout << "need tree" << endl;
        else cout << "array" << endl;
    }
    else{
        ll arr[26];
        memset(arr, 0, sizeof(arr));
        bool flag = true;
        for(ll i = 0; i < s.size(); i++) arr[s[i] - 'a']++;
        for(ll i = 0; i < t.size(); i++) {
            if(!arr[t[i] - 'a']){
                flag = false;
                break;
            }
            else arr[t[i] - 'a']--;
        }
        if(!flag) cout << "need tree" << endl;
        else{
            ll i = 0, j = 0;
            for(ll i = 0; i < s.size(); i++){
                if(s[i] == t[j]) j++;
            }
            if(j == t.size()) cout << "automaton" << endl;
            else cout << "both" << endl;
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