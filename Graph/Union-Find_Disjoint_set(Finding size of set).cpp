// Jeong-Min Lim (limjeongmin@wustl.edu)
// https://www.acmicpc.net/problem/4195
#include <bits/stdc++.h>

using namespace std;
vector<int> p;
int t, f;
unordered_map<string, int> friendz;
string name1, name2;
int num;
vector<pair<int, int>> people;

int find(int n) {
    if (p[n] < 0) return n;
    p[n] = find(p[n]);
    return p[n];
}

void merge(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b) return;
    p[a] += p[b];
    p[b] = a;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> t;
    while (t--) {
        cin >> f;
        num = 1;
        p.clear();
        friendz.clear();
        people.clear();

        for (int i = 0; i < f + 5; i++) {
            p.push_back(-1);
        }

        for (int i = 0; i < f; i++) {
            cin >> name1 >> name2;
            if (friendz.count(name1) == 0) {
                friendz[name1] = num;
                num++;
            }
            if (friendz.count(name2) == 0) {
                friendz[name2] = num;
                num++;
            }
            people.push_back(make_pair(friendz[name1], friendz[name2]));
        }

        for (int i = 0; i < f; i++) {
            merge(people[i].first, people[i].second);
            cout << abs(p[find(people[i].first)]) << "\n"; 

        }
    }
    return 0;
}





