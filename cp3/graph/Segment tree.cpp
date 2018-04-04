// Jeong-Min Lim (limjeongmin@wustl.edu)

#include <bits/stdc++.h>

using namespace std;
vector<long long> arr;
int n, m, k;
int x, y, z;
int ans;
int d;


long long init(vector<long long> &arr, vector<long long> &tree, int node, int start, int end) {
    if (start == end) return tree[node] = arr[start];

    int mid = (start + end) / 2;

    return tree[node] = init(arr, tree, node * 2, start, mid) + init(arr, tree, node * 2 + 1, mid + 1, end);
}

long long sum(vector<long long> &tree, int node, int start, int end, int left, int right) {
    if (left > end || right < start)
        return 0;
    if (left <= start && end <= right)
        return tree[node];

    int mid = (start + end) / 2;
    return sum(tree, node * 2, start, mid, left, right) + sum(tree, node * 2 + 1, mid + 1, end, left, right);
}

void update(vector<long long> &tree, int node, int start, int end, int index, long long diff) {
    if (!(start <= index && index <= end))
        return;

    tree[node] += diff;

    if (start != end) {
        int mid = (start + end) / 2;
        update(tree, node * 2, start, mid, index, diff);
        update(tree, node * 2 + 1, mid + 1, end, index, diff);
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    int h = (int) ceil(log2(n));

    int tree_size = (1 << (h + 1)); // size

    vector<long long> tree(tree_size);

    init(arr, tree, 1, 0, n - 1);


    for (int i = 0; i < m + k; i++) {
        cin >> z;
        if (z == 1) {
            int pos;
            long long val;
            cin >> pos >> val;
            long long diff = val - arr[pos - 1];
            arr[pos - 1] = val;
            update(tree, 1, 0, n - 1, pos - 1, diff);
        } else {
            int left, right;
            cin >> left >> right;
            cout << sum(tree, 1, 0, n - 1, left - 1, right - 1) << "\n";

        }
    }


    return 0;
}





