//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int n;
int element;
vector<int> jumpers, differences;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here

    while (cin >> n) {
        jumpers.clear();
        differences.clear();
        int count = 1;
        int b = 1;


        for (int i = 0; i < n; i++) {
            cin >> element;
            jumpers.push_back(element);
        }

        for (int i = 0; i < jumpers.size() - 1; i++) {
            differences.push_back(abs(jumpers[i + 1] - jumpers[i]));
        }

        sort(differences.begin(), differences.end());


        for (auto &i:differences) {
            if (i == b){
                count ++;
            }
            b++;
        }


        if (count == n) {
            cout << "Jolly\n";
        } else {
            cout << "Not jolly\n"; // "j" olly
        }


    }


    return 0;
}





