#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int a,b,c;
        cin >> a >> b >> c ;
        if((a+b+c)%3==0 && (a+b+c)/3 >= a && (a+b+c)/3 >= b){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}