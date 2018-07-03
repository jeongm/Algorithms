// Jeong-Min Lim (limjeongmin@wustl.edu)
// https://www.acmicpc.net/problem/4673
// Note : Runtime Error (allocate bigger array for ::numbers)

#include <bits/stdc++.h>

using namespace std;
int numbers[200000];

int self_num(int n) {
    int res = n;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    for (int i = 1; i < 10001; i++) {
        int k = i;
        while (k < 10001) {
            k = self_num(k);
            numbers[k] = true;
        }
    }

    for (int i = 1; i < 10001; i++) {
        if (!numbers[i]) {
            cout << i << '\n';
        }
    }


    return 0;
}

