#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
       string a,b;
       cin >> a >> b;
       cout << b[0] << a[1] << a[2] << " " << a[0] << b[1] << b[2] << endl;
    }

}