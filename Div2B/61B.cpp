#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string processString(string word){
    string result = "";
    set<char> s;
    s.insert(';');
    s.insert('-');
    s.insert('_');
    for(ll i = 0; i < word.size(); i++){
        if(!s.count(word[i])) result += tolower(word[i]);
    }
    return result;
}

void solve(){
    string dict[3];
    for(ll i = 0 ; i < 3; i++){
        string temp;
        cin >> temp;
        dict[i] = processString(temp);
    }
    string possible_strs[6] = {
        dict[0] + dict[1] + dict[2],
        dict[0] + dict[2] + dict[1],
        dict[1] + dict[0] + dict[2],
        dict[1] + dict[2] + dict[0],
        dict[2] + dict[1] + dict[0],
        dict[2] + dict[0] + dict[1],    
    };
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++){
        string temp;
        cin >> temp;
        bool flag = false;
        for(ll j = 0; j < 6; j++){
            if(!processString(temp).compare(possible_strs[j])){
                flag = true;
                cout << "ACC" << endl;
                break;
            }
        }
        if(!flag) cout << "WA" << endl;
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