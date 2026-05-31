#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
     int a,b;
     cin >> a >> b;
     if(a==0){
        cout << 1 << endl;
     }else if(b==0){
        cout << a+1 << endl;
     }else{
        cout << a*1 + b*2 + 1 << endl;
     }


    }
}