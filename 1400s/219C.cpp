#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    ll n, k, count1 = 0;
    cin >> n >> k;
    string str, res = "";
    cin >> str;
    if(n == 1) res = str;
    else if(k > 2){
        int end_flag = 0;
        for(int i = 0; i < n - 1; i++){
            int count = 1, col = str[i] - 'A';
            while(i < n - 1 && str[i] == str[i + 1]) {
                count++; i++;
            }
            count1 += count / 2;
            if(count % 2){
                if(i == n - 1){
                    end_flag = 1;
                }
                for(int j = 0; j < count; j++){
                    if(!(j % 2)) res += str[i];
                    else res += (char) (65 + (col + 1) % k);
                }
            }
            else{
                if(i == n - 1){
                    end_flag = 1;
                    for(int j = 0; j < count; j++){
                        if(!(j % 2)) res += str[i];
                        else res += (char) (65 + (col + 1) % k);
                    }
                }
                else{
                    int col_temp = str[i + 1] - 'A';
                    int col_rep;
                    if((col + 1) % k == col_temp){
                        col_rep = (col + 2) % k;
                    } 
                    else{
                        col_rep = (col + 1) % k;
                    }
                    for(int j = 0; j < count; j++){
                        if(!(j % 2)) res += str[i];
                        else res += (char) (65 + col_rep);
                    }
                }
            }
        }
        if(!end_flag){
            res += str[n - 1];
        }
    }
    else{
        int ao = 0, bo = 0, ae = 0, be = 0;
        for(int i = 0; i < n; i++){
            if(i % 2){
                if(str[i] == 'A') ao++;
                else bo++;
            }
            else{
                if(str[i] == 'A') ae++;
                else be++;
            }
        }
        if(ao + be > ae + bo){
            count1 += ae + bo;
            for(int j = 0; j < n; j++){
                if(!(j % 2)) res += 'B';
                else res += 'A';
            }
        }
        else{
            count1 += ao + be;
            for(int j = 0; j < n; j++){
                if(j % 2) res += 'B';
                else res += 'A';
            }
        }
    }
    cout << count1 << endl << res << endl;
}