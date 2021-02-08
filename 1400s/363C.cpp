#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    string s, ans;
    cin >> s;
    int i, t = 0;
    for(i = 0; i < s.size(); i++){
        int num = 0;
        while(s[i] == s[i + 1] && i < s.size()){
            num++; i++;
        }
        if(num < 1) ans += s[i], t = 0;
        if(num >= 1){
            ans += s[i];
            if(!t) ans += s[i], t = 1;
            else t = 0;
        }
    }
    cout << ans << endl;
}