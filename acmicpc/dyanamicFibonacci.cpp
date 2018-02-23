// Jeong-Min Lim (limjeongmin@wustl.edu)

//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    int memo[100];
    int k;
    cin >> k;
    int fib(int n){
        if(n<=1){
            return n;
        }else{
            if( memo[n] > 0){
                return memo[n]; // n번째의 수는 무조건 0보다 크다.
            }
            memo[n] = fib(n-1) + fib(n-2);
            return memo[n];
        }
    }
    return 0;

}





