//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int nextNumber;


int sum;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> sum;
    vector<int> numbers;
    while (cin >> nextNumber) {
        numbers.push_back(nextNumber);
    }
    sort(numbers.begin(), numbers.end()); //modifies the original vector ?
    int left = 0;
    int right = numbers.size() - 1;
    while (left < right) {
        if (numbers[left] + numbers[right] == sum) {
            cout << numbers[left] << " + " << numbers[right] << " = " << sum << "\n";
            return 1;
        } else if (numbers[left] + numbers[right] < sum) {
            left++;
        } else {
            right--;
        }
    }


    return 0;

}

