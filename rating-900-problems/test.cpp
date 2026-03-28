
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[4]={1, 2 ,3 ,0};
    int ans=0;
    for(int a:arr){
        ans=ans^a;
    }
}