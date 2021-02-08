#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s1, s2;
ll dp[70][2][2][2][2];
 

string getbin(ll num){
    string res = "";
    while(num){
        res += ((num & 1) + '0');
        num /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

//NOTATIONS:
//fl1 - flag of current value of a > s1
//fr1 - flag of current value of a < s2
//Similarly fl2, fr2 for b


ll rec(int p, int fl1, int fl2, int fr1, int fr2){
    if (p == s1.size()) return 0;
    if (dp[p][fl1][fl2][fr1][fr2] != -1) return dp[p][fl1][fl2][fr1][fr2];
    int min1 = 0, max1 = 1;
    if (!fl1 && s1[p] == '1') min1 = 1;
    if (!fl2 && s2[p] == '0') max1 = 0;
    int min2 = 0, max2 = 1;
    if (!fr1 && s1[p] == '1') min2 = 1;
    if (!fr2 && s2[p] == '0') max2 = 0;
    ll res = 0;
    for(int i = min1; i < max1 + 1; i++){
        for(int j = min2; j < max2 + 1; j++){
            int v = (i ^ j);
            ll toadd = 0;
            if (v == 1){
                int step = s1.size() - p - 1;
                toadd = (1ll << step);
            }
            int nfl1 = fl1, nfl2 = fl2, nfr1 = fr1, nfr2 = fr2;
            if (i > s1[p] - '0') nfl1 = 1;
            if (i < s2[p] - '0') nfl2 = 1;
            if (j > s1[p] - '0') nfr1 = 1;
            if (j < s2[p] - '0') nfr2 = 1;
            res = max(res, toadd + rec(p + 1, nfl1, nfl2, nfr1, nfr2));
        }
    }
    return dp[p][fl1][fl2][fr1][fr2] = res;
}

int main(){
    ll l, r;
    cin >> l >> r;
    s1 = getbin(l);
    s2 = getbin(r);
    while (s1.size() < s2.size())
        s1 = "0" + s1;
    memset(dp, -1, sizeof(dp));
    cout << rec(0, 0, 0, 0, 0) << endl;
    return 0;
}