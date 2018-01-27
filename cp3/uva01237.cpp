//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int n, m, a, testCase; // size of the set, size of query, element of set

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    vector<int> numbers;

    vector<int> sums;

    int runs = 0;

    cin >> n;
    while (n != 0) {
        runs++;
        cout << "Case " << runs << ":\n";
        numbers.clear();
        sums.clear();

        for (int i = 0; i < n; i++) {
            cin >> a;
            numbers.push_back(a);
        }
        sort(numbers.begin(), numbers.end());

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                sums.push_back(numbers[i] + numbers[j]);
            }
        }

        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> testCase;
            int closestSum = 100000;
            for (auto &sum:sums) {
                if (abs(sum - testCase) < abs(closestSum - testCase)) { // difference: use abs
                    closestSum = sum;
                }
            }
            cout << "Closest sum to " << testCase << " is " << closestSum << ".\n";

        }


        cin >> n;
    }


    return 0;
}
