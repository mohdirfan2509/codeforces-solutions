// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/O
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int maximum(vector<int>& arr) {
    int maxElement = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        maxElement = max(maxElement, arr[i]);
    }
    return maxElement;
}

int minimum(vector<int>& arr) {
    int minElement = INT_MAX;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        minElement = min(minElement, arr[i]);
    }
    return minElement;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int noOfPrimes(vector<int>& arr) {
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}

bool isPalindrome(string s) {
    string x = s;
    reverse(s.begin(), s.end());
    return s == x;
}

int noOfPalindromes(vector<int>& arr) {
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPalindrome(to_string(arr[i]))) {
            count++;
        }
    }
    return count;
}

int noOfDivisors(int n) {
    int count = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count += 2;
            if (i * i == n) {
                count--;
            }
        }
    }
    return count;
}

int elementWithMaxNoOfDivisors(vector<int>& arr) {
    int n = arr.size();
    pair<int, int> currMaxAndElement = {0, 0};
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int divisors = noOfDivisors(arr[i]);
        if (divisors > currMaxAndElement.first) {
            currMaxAndElement = {divisors, arr[i]};
            ans = arr[i];
        } else if (divisors == currMaxAndElement.first) {
            ans = max(arr[i], currMaxAndElement.second);
            currMaxAndElement = {divisors, ans};
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The maximum number : " << maximum(arr) << endl;
    cout << "The minimum number : " << minimum(arr) << endl;
    cout << "The number of prime numbers : " << noOfPrimes(arr) << endl;
    cout << "The number of palindrome numbers : " << noOfPalindromes(arr) << endl;
    cout << "The number that has the maximum number of divisors : " << elementWithMaxNoOfDivisors(arr) << endl;
}