// Jeong-Min Lim (limjeongmin@wustl.edu)
// https://www.acmicpc.net/problem/1753

#include <bits/stdc++.h>

using namespace std;

int V, E, k, a, b, c;
vector<pair<int, int>> graph[20020];
priority_queue<pair<int, int>> pq;
int dist[20020];

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> V >> E >> k;

    for (int i = 0; i < 20020; i++) {
        dist[i] = 1000000;
    }
    for (int i = 0; i < E; i++) {
        cin >> a >> b >> c;
        graph[a].emplace_back(b, c);
    }
    pq.push(make_pair(0, k));
    dist[k] = 0;

    while (!pq.empty()) {
        pair<int, int> front = pq.top();
        pq.pop();
        int d = -front.first;
        int u = front.second;
        if (d > dist[u]) continue;

        for (int j = 0; j < graph[u].size(); j++) {
            pair<int, int> v = graph[u][j];
            if (dist[u] + v.second < dist[v.first]) {
                dist[v.first] = dist[u] + v.second;
                pq.push(make_pair(-dist[v.first], v.first));
            }

        }

    }


    for (int i = 1; i <= V; i++) {
        if (dist[i] == 1000000) cout << "INF\n";
        else cout << dist[i] << '\n';
    }

    return 0;
}





