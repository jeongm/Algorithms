// Jeong Min Lim (limjeongmin@wustl.edu)
// 247R OCT 5 2017
// Powerset
// Given an array
#include <bits/stdc++.h>
using namespace std;
int N, a;
vector<int> mySet;
vector<vector<int>> powerSet;

void power(vector<int> input, int currentIndex, vector<int> subset){
    if (currentIndex >= input.size()){
        powerSet.push_back(subset);
        return;
    }
    subset.push_back(input[currentIndex]);
    power(input,currentIndex+1, subset);
    subset.pop_back();
    power(input, currentIndex+1, subset);

}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >>N;
    for(int i = 0; i < N; i++){
        cin>>a;
        mySet.push_back(a);
    }
    vector<int> sub;
    power(mySet, 0, sub);


    return 0;
}


