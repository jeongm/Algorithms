#include <bits/stdc++.h>

using namespace std;
int a, b, c, d, e;
int sum;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    // https://www.acmicpc.net/problem/10039
    // < 입력은 총 5줄로 이루어져 있고, 원섭이의 점수, 세희의 점수, 상근이의 점수, 숭이의 점수, 강수의 점수가 순서대로 주어진다.
    // < 점수는 모두 0점 이상, 100점 이하인 5의 배수이다. 따라서, 평균 점수는 항상 정수이다.
    // > 첫째 줄에 학생 5명의 평균 점수를 출력한다.
    
    cin >> a >> b >> c >> d >> e; // Not good for multiple inputs
    int scores[] = {a, b, c, d, e};
    for (int i = 0; i < 5; ++i) {
        if (scores[i] < 40) {
            sum += 40;
        } else {
            sum += scores[i];
        }

    }
    cout << sum / 5;
    
    int n; 
    cin >> n; // Number of inputss
    for (int i=0; i<n; i++) {
        cin >> a; // This way, I can handle however many inputs
        if (a < 40) {
            sum += 40;
        }
        else {
            sum += a;
        }
        sum += (a < 40)? 40: a;
    }
    cout << sum / 5;
    while(cin>>a){
        cin>>b;
        cout<< a + b << '\n';
    }
    return 0;
}
