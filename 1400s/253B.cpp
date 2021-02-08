#include <bits/stdc++.h>
using namespace std;
 
#define ll long long

int main() {
	int n, mn = 1e6;
    cin >> n;
    vector<int> practical(n);
    
    for(int i = 0; i < n; i++) cin >> practical[i];
 
    sort(practical.begin(), practical.end());
    
    if (practical[n - 1] <= 2 * practical[0]){
        cout << "0" << endl;
        return 0;
    }
    
    for (int i = 0; i < n; i++){
        int more_than_twice = upper_bound(practical.begin(), practical.end(), 2 * practical[i]) - practical.begin();
        mn = min(mn, n - more_than_twice + i);
    }
    cout << mn << endl;
}