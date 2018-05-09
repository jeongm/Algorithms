
//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int score;


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    vector<int> availableNumbers;
    vector<int> allNumbers;
    for (int i = 1; i < 21; i++) {
        availableNumbers.push_back(i);
        availableNumbers.push_back(i * 2);
        availableNumbers.push_back(i * 3);
    }
    availableNumbers.push_back(0);
    availableNumbers.push_back(50);
    sort(availableNumbers.begin(), availableNumbers.end());
    //겹치는 숫자들을 제거

    auto last = unique(availableNumbers.begin(), availableNumbers.end());
    availableNumbers.erase(last, availableNumbers.end());
    int size = availableNumbers.size();


    cin >> score;
    while (score > 0) {
        allNumbers.clear();
        int permutation = 0;
        int combination = 0;
        bool available = false;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                for (int k = 0; k < size; k++) {
                    if (availableNumbers[i] + availableNumbers[j] + availableNumbers[k] == score) {
                        available = true;
                        if (availableNumbers[i] <= availableNumbers[j] && availableNumbers[j] <= availableNumbers[k]) {
                            combination++;
                        }
                        permutation++;
                    }

                }
            }
        }



        if (!available) {
            cout << "THE SCORE OF " << score <<
                 " CANNOT BE MADE WITH THREE DARTS.\n";
        } else {
            cout << "NUMBER OF COMBINATIONS THAT SCORES " << score <<
                 " IS " << combination << ".\n";
            cout << "NUMBER OF PERMUTATIONS THAT SCORES " << score <<
                 " IS " << permutation << ".\n";

        }

        cin >> score;
        if (score > 0) {
            cout << "**********************************************************************\n";
        } else {
            cout << "**********************************************************************\n";
            cout << "END OF OUTPUT\n";
        }

    }


    return 0;
}
