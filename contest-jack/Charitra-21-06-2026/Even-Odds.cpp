#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    long long arr[n];
    long long index=0;
    for(long long i=1;i<=n;i++){
        if(i%2==1){
            arr[index]=i;
            index++;
        }
    }
     for(long long i=1;i<=n;i++){
        if(i%2==0){
            arr[index]=i;
            index++;
        }
    }
    if(k==1){
        cout << arr[0] << endl;

    }else{
        cout << arr[k-1] << endl;
    }
}