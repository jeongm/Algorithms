// Jeong-Min Lim (limjeongmin@wustl.edu)

#include <bits/stdc++.h>

using namespace std;
int a, b, c;
int v, e;
vector<pair<int, int>> graph[10010];
long long int mst;
bool taken[10010];
priority_queue<pair<int, int>> pq;
int x, y;


void process(int vtx) {
    taken[vtx] = true;
    for (int j = 0; j < (int) graph[vtx].size(); j++) {
        pair<int, int> v = graph[vtx][j];
        if (!taken[v.first]) {
                pq.push(make_pair(-v.second, -v.first));
        }
    }
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here

    cin >> v >> e;
    bool rand = false;
    int start;
    for (int i = 0; i < e; i++) {
        cin >> a >> b >> c;
        if (!rand) {
            start = a;
            rand = true;
        }
        graph[a].push_back(make_pair(b, c ));
        graph[b].push_back(make_pair(a, c ));
    }

    process(start);

    while (!pq.empty()) {
        pair<int, int> front = pq.top();
        pq.pop();
        x = -front.second;
        y = -front.first;
        if (!taken[x]) {
            mst += y;
            process(x);
        }
    }
    cout << mst;


    return 0;
}





