#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n,a[10],_min = INT_MAX, max, ans;
	cin >> n;
	for(int i = 1; i <= 9; i++){
		cin >> a[i];
		_min = min(_min, a[i]);
	}
	if(n < _min) cout << -1 << endl;
	while(n >= _min){
		max = n % _min + _min;
		int la = 0;
		for(int i = 9; i >= 1; i--){
			if(a[i] <= max){
                la = a[i]; 
                ans = i;
				break;
            }
		}
		cout << ans << endl;
		n -= la;
	}	
    cout << endl;
}