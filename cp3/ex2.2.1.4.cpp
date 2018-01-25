//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int e;
int a, b;
string result;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    vector<int> numbers;
    cin >> a >> b;
    while (cin >> e) {
        numbers.push_back(e);
    }
    sort(numbers.begin(), numbers.end()); // sort numbers
    vector<int> inrange;
    for (auto &i:numbers) {
        if (i >= a && i <= b) {
            inrange.push_back(i);
            cout << i << "\n";
        }
    }


    return 0;
}


}
