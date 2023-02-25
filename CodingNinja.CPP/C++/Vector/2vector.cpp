#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> testScore(3);

    cout << "Enter test score to add in the vector:";
    cin >> testScore[0];
    cin >> testScore[1];
    cin >> testScore[2];
    cout << "TestScores are:" << testScore[0] << "," << testScore[1] << "," << testScore[2] << endl;
    cout << endl;

    int score_to_add;
    cout << "Enter a score to add in the vector:";
    cin >> score_to_add;

    testScore.push_back(score_to_add); // is used to add elemnts in the vector at last

    cout << "Enter another score to add in the vector:";
    cin >> score_to_add;

    testScore.push_back(score_to_add);

    cout << "Updated testScores are:" << testScore[0] << "," << testScore[1] << "," << testScore[2] << "," << testScore[3] << "," << testScore[4] << endl;

    // cout << testScore.at(10) << endl;//using array syntext testscore[10] will not get you exception so i have to use this testscore.at(10).
}