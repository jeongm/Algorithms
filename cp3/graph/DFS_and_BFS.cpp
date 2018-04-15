// Jeong-Min Lim (limjeongmin@wustl.edu)
//  https://www.acmicpc.net/problem/1260
#include <bits/stdc++.h>

using namespace std;
int n, m, v, p, l;
int graph[1010][1010] = {0,};
bool visitedD[1010] = {false,};
bool visitedB[1010] = {false,};


void dfs(int i){
    visitedD[i] = true;
    cout << i << " ";
    for(int j = 1; j<=n; j++){
        if(graph[i][j]==1 && !visitedD[j]){
            dfs(j);
        }
    }
}

void bfs(int i){
    queue<int> q;
    q.push(i);
    visitedB[i] = true;
    cout << i << " ";

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        for(int j = 0; j <= n; j++){
            if(graph[temp][j]==1 && !visitedB[j]){
                q.push(j);
                visitedB[j] = true;
                cout << j << " ";
            }
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
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++) {
        cin >> p >> l;
        graph[p][l] = 1;
        graph[l][p] = 1;
    }

    dfs(v);
    cout << "\n";
    bfs(v);
    cout << "\n";



    return 0;
}





