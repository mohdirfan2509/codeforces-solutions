#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int n;
        cin >> n;
        if(n%2 !=0){
            cout << "NO" << "\n";
        }else{
            cout << "YES" << "\n" ;
            for(int j=1;j<=n/2;j++){
                cout << "AAB";
            }
            cout << "\n";
        }
    }
}