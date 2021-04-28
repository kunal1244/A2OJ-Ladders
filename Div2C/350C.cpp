#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    int n;
    cin >> n;
    pair<int, pair<int, int>> arr[n];
    int sum = 0, x, y;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        arr[i] = {abs(x) + abs(y), {x, y}};
        if(x) sum++;
        if(y) sum++;
    }
    sort(arr, arr + n);
    cout << (sum + n) * 2 << endl;
    for (int i = 0; i < n; i++){
        x = arr[i].second.first;
        y = arr[i].second.second;
        char dirh = 'R', dirv = 'U';
        if(x < 0) dirh = 'L';
        if(y < 0) dirv = 'D';
        if (x) cout << "1 " << abs(x) << " " << dirh << endl;
        if (y) cout << "1 " << abs(y) << " " << dirv << endl;
        cout << 2 << endl;
        if(x < 0) dirh = 'R';
        else dirh = 'L';
        if(y < 0) dirv = 'U';
        else dirv = 'D';
        if (x) cout << "1 " << abs(x) << " " << dirh << endl;
        if (y) cout << "1 " << abs(y) << " " << dirv << endl;
        cout << 3 << endl;
    }
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