#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
    cout << vowels[3] << endl;
    cout << vowels[4] << endl;

    vector<int> testcores{100, 88, 99};
    cout << testcores[0] << endl;
    cout << testcores[1] << endl;
    cout << testcores[2] << endl;
    cout << "There are " << testcores.size() << " scores in the vector" << endl;
    cout << endl;
    cout << "Enter some test scores:";
    cin >> testcores[0] >> testcores[1] >> testcores[2];
    cout << "Updates test scores:";
    cout << testcores[0] << endl;
    cout << testcores[1] << endl;
    cout << testcores[2] << endl;
    cout << "There are " << testcores.size() << " scores in the vector" << endl;
}