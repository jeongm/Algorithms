//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int N;
int e;


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    vector<int> numbers;
//    numbers.clear();
    vector<int> maxContiguous;
//    maxContiguous.clear();

    cin >> N; // How many elements are in array
    for (int j = 0; j < N; j++) {
        cin >> e;
        numbers.push_back(e);
    }
    sort(numbers.begin(), numbers.end());

    int howManyContiguous = 1; // counter for contiguous sub-array
    int currentContiguousStreak = 1;
    for (int j = 0; j < N - 1; j++) {
        if (numbers[j] + 1 == numbers[j + 1]) {
            currentContiguousStreak++;
            if (currentContiguousStreak > howManyContiguous) {
                howManyContiguous = currentContiguousStreak;
            }
        } else {
            currentContiguousStreak = 1;
        }

    }
    cout << howManyContiguous << "\n";


    return 0;


}

