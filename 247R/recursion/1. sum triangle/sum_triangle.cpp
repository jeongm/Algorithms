// Jeong Min Lim (limjeongmin@wustl.edu)
// 247R OCT 5 2017
// SUM TRIANGLE
// Given an input integer array and its size N, recursively print sum of every two pairs recursively.
#include <bits/stdc++.h>
using namespace std;
int n;
int a;
vector<int> input_array;


void sumTri(vector<int> a){
    if (a.size() < 1){
        return;
    }else if(a.size()==1){
        cout << a[0];
    }else{
        vector <int> output;
        for (auto &i:a){
            cout << i << " ";
        } cout << '\n';
        for(int i = 0; i < a.size()-1; i++){
            output.push_back(a[i] + a[i+1]);
        }
        sumTri(output);
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> n;
    int b;
    for(int i = 0; i<n; i++){
        cin >> b;
        input_array.push_back(b);
    }
    sumTri(input_array);

    return 0;
}


