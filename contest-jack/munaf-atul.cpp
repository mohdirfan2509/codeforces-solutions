#include<iostream>

using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int l,r;
       cin >> l >> r;
       int score=0;
       int n=2;
       while(n<=r){
         n=n*2;
         score++;
       }
       cout << score << "\n";
    }
}