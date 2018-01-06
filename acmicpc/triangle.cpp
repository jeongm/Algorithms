#include <bits/stdc++.h>

using namespace std;

int triangleSumAllSides(vector<int> v), a, b, c, triangleMaxSide(vector<int> v);
int d, e, f;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> a >> b >> c;
    vector<int> sides = {a, b, c};

    while ((a && b && c) != 0) {
        if (triangleMaxSide(sides) >= (triangleSumAllSides(sides) - triangleMaxSide(sides))) {
            cout << "Invalid" << '\n';

        } else {
            if ((a == b) && (a == c)) {
                cout << "Equilateral" << '\n';

            } else if (((a == b) && (a != c)) || ((b == c) && (b != a)) || ((c == a) && (c != b))) {
                cout << "Isosceles" << '\n';

            } else {
                cout << "Scalene" << '\n';
            }
        }
        cin >> a >> b >> c;
        sides = {a, b, c};
    }

    return 0;
}


int triangleSumAllSides(vector<int> v) {
    int sum = 0;
    for (int i: v) {
        sum += i;
    }
    return sum;
}


int triangleMaxSide(vector<int> v) {
    int maxSide = *max_element(v.begin(), v.end());
    return maxSide;
}



