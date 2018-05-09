//#include <bits/stdc++.h>
#include "/Users/jeongminlim/stdc++.h"

using namespace std;
int numberOfTestCases;
int numberOfStudents;
int IndividualScores;
int IndividualScoresSum;
int averageScore;
int numberOfStudentsAboveAverage;
double result;
int i, j;

int sumScores(vector<int> v);

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    //code here
    cin >> numberOfTestCases;
    vector<int> studentTestScores;
    while (i < numberOfTestCases) {
        cin >> numberOfStudents;

        // Reset variables to default value
        j = 0;
        numberOfStudentsAboveAverage = 0;
        studentTestScores.clear(); // Github Remarks

        // Get vector containing students' scores
        while (j < numberOfStudents) {
            cin >> IndividualScores;
            studentTestScores.push_back(IndividualScores);
            j++;
        }

        // Get average score
        IndividualScoresSum = sumScores(studentTestScores);
        averageScore = IndividualScoresSum / numberOfStudents;

        // Count how many students are above average
        for (auto &i : studentTestScores) {
            if (i > averageScore) {
                numberOfStudentsAboveAverage++;
            }
        }

        // Get percentage of students above average per test cases
        result = numberOfStudentsAboveAverage / (double) numberOfStudents * 100;
        cout << setprecision(3) << fixed << result << '%' << '\n'; // Github remarks

        i++;
    }

    return 0;
}

int sumScores(vector<int> v) {
    int sum = 0;
    for (auto &i: v) {
        sum = sum + i;
    }
    return sum;
}
