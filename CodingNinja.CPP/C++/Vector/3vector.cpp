#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {3, 4, 5, 6, 7, 8, 8};
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }

    cout << "\n"
         << numbers[3] << endl;

    numbers.push_back(9);
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    numbers.pop_back();
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << numbers.capacity() << endl;

    numbers.clear();

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
}