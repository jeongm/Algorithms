// Jeong Min Lim (limjeongmin@wustl.edu)
// 247R OCT 5 2017
// Parentheses
// Given an integer, return all possible combinations of valid parentheses.


#include <bits/stdc++.h>

using namespace std;
int N;
set<string> parenthesis_combination;

void paren(int n, string current_combination) {
    if (n % 2 == 1) {
        return;
    }
    if (n == 0) {
        parenthesis_combination.insert(current_combination);
        return;
    }
    for (int i = 0; i <= current_combination.length(); i++) {
        paren(n - 2, current_combination.substr(0, i).append("()").append(current_combination.substr(i)));
    }
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> N;
    paren(N, "");
    for (auto it=parenthesis_combination.begin(); it != parenthesis_combination.end(); ++it)
        cout << *it << '\n';


    return 0;
}


