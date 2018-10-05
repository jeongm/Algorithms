// Jeong Min Lim (limjeongmin@wustl.edu)
// isPalindrome
#include <bits/stdc++.h>

using namespace std;
char c;
vector<char> s;


bool isPalindrome(vector<char> str) {
    int n = str.size();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    while (cin >> c) {
        s.push_back(c);
    }

    cout << isPalindrome(s);


    return 0;
}


