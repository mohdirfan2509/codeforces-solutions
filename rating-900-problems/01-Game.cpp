// Question Link: https://codeforces.com/problemset/problem/1373/B  

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
     string s;
     cin >> s ;
     int noOfZeros=0;
     int noOfOnes=0;
     for(int j=0;j<s.size();j++){
        if(s[j]=='0'){
            noOfZeros++;
        }
        if(s[j]=='1'){
            noOfOnes++;
        }
     }
     if(s.size()>1 && min(noOfZeros,noOfOnes)%2==1){
        cout << "DA" << endl;
     }else{
        cout << "NET" << endl;
     }
      
    }

}