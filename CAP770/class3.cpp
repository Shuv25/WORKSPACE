#include <iostream>

using namespace std;

class Vowels
{
private:
    string word;

public:
    Vowels(string nw)
    {
        word = nw;
    }
    int n = word.size();
    char *arr = new char[n];
    int *countArr = new int[n];
    int vowelCount = 0;

    void output()
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
            {
                cout << word[i] << " ";
                char currentVowel = word[i];
                int count = 1;
                bool found = false;
                for (int j = 0; j < vowelCount; j++)
                {
                    if (arr[j] == currentVowel)
                    {
                        found = true;
                        countArr[j]++;
                        break;
                    }
                }
                if (!found)
                {
                    arr[vowelCount] = currentVowel;
                    countArr[vowelCount] = count;
                    vowelCount++;
                }
            }
        }
        cout << endl;
        for (int i = 0; i < vowelCount; i++)
        {
            cout << arr[i] << ": " << countArr[i] << " ";
        }
    }

    ~Vowels()
    {
        delete[] arr;
        delete[] countArr;
    }
};

int main()
{
    string s;
    getline(cin, s);

    Vowels v(s);

    v.output();

    return 0;
}
