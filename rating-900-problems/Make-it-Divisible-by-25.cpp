// Question Link: https://codeforces.com/problemset/problem/1593/B
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minOperations(string n,string possibleValue){
    int checkerIndex=possibleValue.size()-1;
    int operations=0;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]==possibleValue[checkerIndex]){
            checkerIndex--;
            if(checkerIndex<0){
                break;
            }
        }else{
            operations++;

        }
    }
    if(checkerIndex>=0){
      operations=INT_MAX;
    }
    return operations;

}

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
       string n;
       cin >> n;
       vector<string> possibleValues={"00","25","50","75"};
       int ans=INT_MAX;
       for(string possibleValue:possibleValues){
          ans=min(ans,minOperations(n,possibleValue));
       }

       cout << ans << endl;

    }

}