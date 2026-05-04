#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(s.begin(),s.end());
     int sum=0;
     int count =  0;
     int flag=true;

    for(int j=0;j<s.size()-1;j++){
        if((int)s[j+1]-(int)s[j]>1){
            sum+= (int)s[j]-97+1;
            count++;
        } 
        if(count==k){
            flag=false;
            break;
        }
    }
    if(flag){
        sum+=(int)s[s.size()-1]-97+1;
        count++;
    }
    if(count<k){
        sum=-1;
    }

    cout << sum  << endl;
}

