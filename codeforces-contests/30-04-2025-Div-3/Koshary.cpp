#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
       int x,y;
       cin >> x >> y ;
       if(x%2 !=0 && y%2 !=0){
        cout << "NO" << endl;
       }else{
        cout << "YES" << endl;
       }
    }
}