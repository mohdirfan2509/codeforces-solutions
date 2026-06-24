// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

#include<iostream>
using namespace std;

int main(){
   int a,b;
   cin >> a >> b ;
   bool flag=true;
   for(int i=a;i<=b;i++){
    string s=to_string(i);
    bool isValid=true;
    for(char c:s){
        if(c!='4' && c!='7'){
            isValid=false;
        }
    }
    if(isValid){
        cout << i << " ";
        flag=false;
    }
   }
   if(flag){
    cout << -1;
   }
}

