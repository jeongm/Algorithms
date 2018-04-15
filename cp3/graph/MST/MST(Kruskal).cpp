// Jeong-Min Lim (limjeongmin@wustl.edu)

#include <bits/stdc++.h>

using namespace std;
vector<int> p;
int v, e, a, b, c;
vector<tuple<int, int, int>> graph;
long long int mst;

int find(int n) {
    if (p[n] < 0) return n;
    p[n] = find(p[n]);
    return p[n];
}

void merge(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b) return;
    p[b] = a;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> v >> e;
    for (int i = 0; i < v + 5; i++) {
        p.push_back(-1);
    }

    for (int i = 0; i < e; i++) {
        cin >> a >> b >> c;
        graph.push_back(make_tuple(c, a, b));
    }

    sort(graph.begin(), graph.end());

    int x = get<0>(graph[0]);
    int y = get<1>(graph[0]);


    for (int i = 0; i < e; i++) {
        int x = get<1>(graph[i]);
        int y = get<2>(graph[i]);

        if (find(x) == find(y)) {
            continue;
        } else {
            merge(x, y);
            mst += get<0>(graph[i]);
        }

    }

    cout << mst << "\n";

    return 0;
}





