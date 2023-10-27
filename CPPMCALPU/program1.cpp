// Write a program to recieve marks of a student in three diff subjects of of 100 each and calculate the final result of student as per the following criteria if percentahe is less than 40 result is fail, 40 to 59 result is pass, 60 to 79 result is first ,80 + merit.

#include <iostream>

using namespace std;

int main()
{

    int sub1, sub2, sub3;
    cout << "Enter the marks in three subject one by one:";
    cin >> sub1 >> sub2 >> sub3;

    float percentage = (sub1 + sub2 + sub3) / 3;

    cout << "Your Percentage is :" << percentage << endl;

    if (100 >= percentage && percentage >= 80)
    {
        cout << "Merit";
    }
    else if (79 >= percentage && percentage >= 60)
    {
        cout << "First";
    }
    else if (59 >= percentage && percentage >= 40)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }
}