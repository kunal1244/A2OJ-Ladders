#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
 
char a[510][510];
short vis[510][510];
int m, n, k;
int DFS(int i, int j){
	
	if (vis[i][j])return 0;
	vis[i][j] = 1;
 
	if (i > 0)  DFS(i-1, j);
	if (i < n-1)DFS(i+1, j);
	if (j > 0)  DFS(i, j-1);
	if (j < m-1)DFS(i, j+1);
	
	if (k > 0){
		vis[i][j] = -1;
		k--;
	}
	
	return 0;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> k;
	for (int i = 0 ; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
			if (a[i][j] == '#')vis[i][j] = 2;
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (a[i][j] == '.'){
				DFS(i, j);
				break;
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (vis[i][j] == 2)cout << "#";
			else if (vis[i][j] == -1) cout << "X";
			else cout << ".";
		}
		cout << endl;
	}
}