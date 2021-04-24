#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string s;
    cin >> s;
    vector<int> v;
    if (s[0] == '@' || s.back() == '@' || s.find('@') == -1) {cout << "No solution" << endl; return ;}
    for (int i = 0; i < s.size(); i++) if (s[i] == '@') v.push_back(i);
    for (int i = 1; i < v.size(); i++) if (v[i] - v[i - 1] < 3) {cout << "No solution" << endl; return ;}
    for (int i = 0; i < v.back(); i++){
        cout << s[i];
        if (s[i - 1] == '@') cout << ",";
    }
    for (int i = v.back(); i < s.size(); i++) cout << s[i];
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