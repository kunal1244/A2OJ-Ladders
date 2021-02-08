#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, s;
    cin >> r >> s;
    char temp;
    vector<int> rows(r, 0), columns(s, 0);
    for(int i = 0; i < r; i++){
        for(int j = 0; j < s; j++){
            cin >> temp;
            if(temp == 'S'){
                columns[j] = 1;
                rows[i] = 1;
            }
        }
    }
    int count = 0;

    for(int i = 0; i < r; i++){
        if(rows[i]){
            for(int j = 0; j < s; j++){
                if(!columns[j]){
                    count++;
                }
            }
        }
        else{
            count += s;
        }
    }
    cout << count<< endl;

}