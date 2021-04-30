#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    int n, m, a[100009], l[100009], r[100009], x, y;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++){
        if(a[i] <= a[i - 1]) l[i] = l[i - 1];
        else l[i] = i;
    }
    for (int i = n; i >= 0; i--){
        if(a[i] <= a[i + 1]) r[i] = r[i + 1];
        else r[i] = i;
    }
    for (int i = 0; i < m; i++){
        cin >> x >> y;
        if (r[x] >= l[y]) cout << "Yes" << endl;
        else cout << "No" << endl;
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