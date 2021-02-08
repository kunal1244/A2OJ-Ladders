#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector <pair<int, int>> drifts(100);
bool seen[100];

void dfs(int c, int n){
    seen[c] = true;
    for(int i = 0; i < n; i++){
        if(!seen[i]){
            if(drifts[c].first == drifts[i].first ||  drifts[c].second == drifts[i].second){
                dfs(i, n);
            }
        }
    }
}

int main(){
    int n, count = 0, a, b;
    memset(seen, false, sizeof(seen));
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        a--; b--;
        drifts[i] = make_pair(a, b);
    }
    seen[0] = true; dfs(0, n);
    for(int i = 0; i < n; i++){
        if(!seen[i]){
            dfs(i, n);
            count++;
        }
    }
    cout << count << endl;
}