#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n, p;
    cin >> n >> p;
    p--;
    string s;
    cin >> s;
    vector<int> c(n);
    int l = -1, r = -1;
    int sum = 0;
    for(int i = 0; i < n / 2; i++){
    	c[i] = c[n - i - 1] = min((s[i] - s[n - i - 1] + 26) % 26, (s[n - i - 1] - s[i] + 26) % 26);
    	if(c[i]){
    		if(l == -1) l = i;
    		r = i;
    	}
    	sum += c[i];
    }
    if(p >= n/2){
    	p = n - p - 1;
    }
    if(sum == 0)
    	cout << sum << endl;
    else
    	cout << sum + min(abs(r - p) + r - l, abs(l - p) + r - l) << endl;
}