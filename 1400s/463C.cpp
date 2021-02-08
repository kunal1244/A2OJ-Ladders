#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll a[2010][2010], d1[4010] = {0}, d2[4010] = {0};
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            d1[i + j] += a[i][j];
            d2[i - j + n] += a[i][j];
        }
    }
    ll a1x, a1y, a2x, a2y, m1 = -1, m2 = -1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if((i + j) % 2 == 0){
                if(m1 < (d1[i + j] + d2[i - j + n] - a[i][j])){
                    m1 = (d1[i + j] + d2[i - j + n] - a[i][j]);
                    a1x = i;
                    a1y = j;
                }
            }
            else{
                if(m2 < (d1[i + j] + d2[i - j + n] - a[i][j])){
                    m2 = (d1[i + j] + d2[i - j + n] - a[i][j]);
                    a2x = i;
                    a2y = j;
                }
            }
        }
    }
    cout << m1 + m2 << endl;
    cout << a1x << " " << a1y << " " << a2x << " " << a2y;
    return 0; 
}
