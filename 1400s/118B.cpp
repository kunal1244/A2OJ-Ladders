#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        string line = "";
        for(int j = 0; j < (n - i) * 2; j++){
            line += " ";
        }
        for(int j = 0; j < i; j++){
            line += to_string(j) + " ";
        }
        for(int j = i ; j >= 0; j--){
            line += to_string(j) + " ";
        }
        line.pop_back();
        cout << line << endl;
    }
    for(int i = n - 1; i >= 0; i--){
        string line = "";
        for(int j = 0; j < (n - i) * 2; j++){
            line += " ";
        }
        for(int j = 0; j < i; j++){
            line += to_string(j) + " ";
        }
        for(int j = i ; j >= 0; j--){
            line += to_string(j) + " ";
        }
        line.pop_back();
        cout << line << endl;
    }
}