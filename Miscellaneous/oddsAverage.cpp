//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h" 

using namespace std;
int A, B, C, D, E, F, G;

int sumOdds(vector<int> v);

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here

//    7개의 자연수가 주어질 때, 이들 중 홀수인 자연수들을 모두 골라 그 합을 구하고, 고른 홀수들 중 최소값을 찾는 프로그램을 작성하시오.

    cin >> A >> B >> C >> D >> E >> F >> G;
    vector<int> numbers = {A, B, C, D, E, F, G};
    vector<int> odds;
    for (auto &i: numbers) {
        if (i % 2 != 0) {
            odds.push_back(i);
        }
    }

    if (odds.size() == 0) {
        cout << -1 << '\n';
    } else {
        int minimum = *min_element(odds.begin(), odds.end()); // * stands for dereferencing
        int sums = sumOdds(odds);
        cout << sums << '\n';
        cout << minimum << '\n';
    }

    return 0;
}

int sumOdds(vector<int> v) {
    int sum = 0;
    for (int i: v) {
        sum += i;
    }
    return sum;
}
