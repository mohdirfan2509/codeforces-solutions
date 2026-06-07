#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sqt=sqrt(n);
        if(sqt*sqt==n){
           int row=0;
           int col=0;
           bool flag=true;
           for(int j=0;j<n;j++){
            if(row==0 && s[((row-1)*sqt+col)]==0){
                cout << "No" << endl;
                flag=false;
                break;
            }else if((col==0 || col==sqt-1) && s[((row-1)*sqt+col)]==0){
                cout << "No" << endl;
                flag=false;
                break;
            }else if((row==sqt-1) && s[((row-1)*sqt+col)]==0){
                cout << "No" << endl;
                flag=false;
                break;
            }
            col++;
            if(col==sqt-1){
                row++;
                col=0;
            }
           }
           if(flag){
            cout << "Yes" << endl;
           }
        }else{
            cout << "NO" << endl;
        }
    }
}