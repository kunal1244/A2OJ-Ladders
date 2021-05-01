#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    int i;
    string str;
    cin >> str;
    for(i = 0; i < str.size(); i++) if(str[i] == 'r') cout << i + 1 << endl; 
    for(i = str.size() - 1; i >= 0; i--) if(str[i] == 'l') cout << i + 1 << endl;
}

int main(){
    std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); 
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}