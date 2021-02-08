#include <bits/stdc++.h>
#define ll long long int

using namespace std;

long long n, m[250000], m1[250000], k, x, y;
long long s;
int main(){
     cin >> n >> k;
     for (int i = 1; i <= n; i++) cin >> m[i];
     for (int i = 0; i < k; i++){
          cin >> x >> y;
          m1[x]++; m1[y + 1]--;
     }
     for (int i = 2; i <= n; i++){
          m1[i] += m1[i - 1];
     }
     for(int i = 1; i <= n; i++){
          cout << m1[i] << " ";
     }
     cout << endl;
     
     sort(m1 + 1, m1 + n + 1);
     sort(m + 1, m + n + 1);
     for(int i = 1; i <= n; i++){
          s += m[i] * m1[i];
     }
     cout << s << endl;
     
}