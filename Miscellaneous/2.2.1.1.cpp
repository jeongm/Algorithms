//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int T, e; // T = number of elements
int MAX = 100 * 1000; // 1 <= N <= 100k 
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> T;
    vector<int> numbers;
    for (int i = 0; i < T; i++) {
        cin >> e;
        numbers.push_back(e);
    }
    bool pairs[100000] = {false,};

    for (auto &i:numbers) {
        if (pairs[i] == false) {
            pairs[i] = true;
        } else {
            cout << i << " is duplicate\n";
        }
    }
    return 0;

}

