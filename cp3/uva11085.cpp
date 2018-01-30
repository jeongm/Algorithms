//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;


int row[8], a = 0, b = -1, lineCounter, T;
int all[92][8], testcase[8];
int runs;

// helper function to determine whether each queen is in valid position with respect to one before it
bool place(int r, int c) {
    for (int prev = 0; prev < c; prev++) {
        if (row[prev] == r || (abs(row[prev] - r) == abs(prev - c))) {
            return false;
        }
    }
    return true;
}

// driver function that recursively puts queens in valid position and stores them to 2D array
void backtrack(int c) {
    // base case. c == 8 : all 8 queens were placed in valid position.
    // row[b] == a :  I do not know how to run the function until I get all the cases.
    // This particular case a = 0 and b = -1 worked, so I used this case.

    if (c == 8 && row[b] == a) {
        lineCounter++;
        all[lineCounter - 1][0] = row[0] + 1;
        for (int j = 1; j < 8; j++) {
            all[lineCounter - 1][j] = row[j] + 1;
        }
    }

    for (int r = 0; r < 8; r++) {
        if (place(r, c)) {
            row[c] = r;
            backtrack(c + 1);
        }
    }

}

// function to count how many queens from input are in valid position
int compareTwoArray(int first[8], int second[8]) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        if (first[i] == second[i]) {
            count++;
        }

    }
    return count;
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
//code here
    backtrack(0);

    while (cin >> T) {
        int numberOfSameRow = -1;
        runs++;
        testcase[0] = T;

        for (int i = 1; i < 8; i++) {
            cin >> T;
            testcase[i] = T;
        }


        for (int i = 0; i < 92; i++) {
            int matches = compareTwoArray(all[i], testcase);
            if (matches > numberOfSameRow) {
                numberOfSameRow = matches;
            }

        }
        cout << "Case " << runs << ": " << 8 - numberOfSameRow << "\n";
    }


    return 0;
}





