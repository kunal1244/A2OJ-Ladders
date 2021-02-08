#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n, temp;
    cin >> n;
    int p = 0, q = 0, r = 0, flag = 0;;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == 25 && !flag){
            p++;
        }
        else if(temp == 50 && !flag){
            q++;
            if(p){
                p--;
            }
            else{
                flag = 1;
                break;
            }
        }
        else if(temp == 100 && !flag){
            r++;
            if(q && p){
                p--;
                q--;
            }
            else if(p >= 3){
                p -= 3;
            }
            else{
                flag = 1;
                break;
            }
        }
    }
    if(flag){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}