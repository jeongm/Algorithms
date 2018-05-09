// Jeong-Min Lim (limjeongmin@wustl.edu)

//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
string num;
vector<int> numbers;


// add all digits, if divideable by 3
// check if 0 exists

int sumV(vector<int> v) {
    int sum = 0;
    for (auto &i:v) {
        sum += i;
    }
    return sum;
}




int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    bool ten = false;
    bool three = false;


    cin >> num;
    for (int i = 0; i < num.length(); i++) {
        numbers.push_back(num[i] - 48);
        if (num[i] == 48) {
            ten = true;
        }
    }

    sort(numbers.rbegin(), numbers.rend());


    if (sumV(numbers) % 3 == 0) {
        three = true;
    }

    if (three && ten) {
        for(auto &i:numbers){
            cout << i;
        }
    } else {
        cout << -1;
    }


    return 0;
}





