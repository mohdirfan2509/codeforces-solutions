// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include<iostream>
using namespace std;

int main(){
 int n;
 cin >> n;
 int arr[n];
 for(int i=0;i<n;i++){
   cin >> arr[i]; 
 } 
 int cEven=0;
 int cOdd=0;
 int cPositive=0;
 int cNegative=0;
 for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        cEven++;
    }else{
        cOdd++;
    }

    if(arr[i]>0){
        cPositive++;
    }else if(arr[i]<0){
        cNegative++;
    }   
 }  
 cout << "Even: " <<  cEven <<endl;
 cout << "Odd: " <<  cOdd <<endl;
 cout << "Positive: " <<  cPositive <<endl;
 cout << "Negative: " <<  cNegative <<endl;
}