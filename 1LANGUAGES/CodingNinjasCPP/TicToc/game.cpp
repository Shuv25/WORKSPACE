#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Welcome to tic toc toe developed by shuv" << endl;
    cout << "\nFirst player's no wll be 1, second player's no will be 2 and null spaces are represent as 32." << endl;
    cout << endl;
    string s1, s2;
    cout << "Enter the name of first player:";
    getline(cin, s1);
    cout << endl;
    cout << "Enter the name of second player:";
    getline(cin, s2);
    cout << endl;

    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = ' ';
        }
    }

    int m = 9;
    int flag = 0;
    while (m != 0)
    {
        int n;
        cout << s1 << "'s position in board:";
        cin >> n;
        cout << endl;
        int x, y;
        if (n == 1)
        {
            x = 0;
            y = 0;
        }
        else if (n == 2)
        {
            x = 0;
            y = 1;
        }
        else if (n == 3)
        {
            x = 0;
            y = 2;
        }
        else if (n == 4)
        {
            x = 1;
            y = 0;
        }
        else if (n == 5)
        {
            x = 1;
            y = 1;
        }
        else if (n == 6)
        {
            x = 1;
            y = 2;
        }
        else if (n == 7)
        {
            x = 2;
            y = 0;
        }
        else if (n == 8)
        {
            x = 2;
            y = 1;
        }
        else if (n == 9)
        {
            x = 2;
            y = 2;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr[x][y] = 1;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1)
                {
                    flag = 1;
                }
                if (arr[0][0] == 1 && arr[1][0] == 1 && arr[2][0] == 1)
                {
                    flag = 1;
                }
                if (arr[0][0] == 1 && arr[0][1] == 1 && arr[0][2] == 1)
                {
                    flag = 1;
                }
                if (arr[2][0] == 1 && arr[2][1] == 1 && arr[2][2] == 1)
                {
                    flag = 1;
                }
                if (arr[0][2] == 1 && arr[1][2] == 1 && arr[2][2] == 1)
                {
                    flag = 1;
                }
                if (arr[0][2] == 1 && arr[1][1] == 1 && arr[2][0] == 1)
                {
                    flag = 1;
                }
                if (arr[0][1] == 1 && arr[1][1] == 1 && arr[2][1] == 1)
                {
                    flag = 1;
                }
                if (arr[1][0] == 1 && arr[1][1] == 1 && arr[1][2] == 1)
                {
                    flag = 1;
                }
                if (arr[0][0] == 2 && arr[1][1] == 2 && arr[2][2] == 2)
                {
                    flag = 2;
                }
                if (arr[0][0] == 2 && arr[1][0] == 2 && arr[2][0] == 2)
                {
                    flag = 2;
                }
                if (arr[0][0] == 2 && arr[0][1] == 2 && arr[0][2] == 2)
                {
                    flag = 2;
                }
                if (arr[2][0] == 2 && arr[2][1] == 2 && arr[2][2] == 2)
                {
                    flag = 2;
                }
                if (arr[0][2] == 2 && arr[1][2] == 2 && arr[2][2] == 2)
                {
                    flag = 2;
                }
                if (arr[0][2] == 2 && arr[1][1] == 2 && arr[2][0] == 2)
                {
                    flag = 2;
                }
                if (arr[0][1] == 2 && arr[1][1] == 2 && arr[2][1] == 2)
                {
                    flag = 2;
                }
                if (arr[1][0] == 2 && arr[1][1] == 2 && arr[1][2] == 2)
                {
                    flag = 2;
                }
            }
        }

        if (flag == 1)
        {
            cout << "\n"
                 << s1 << " wins the game" << endl;
            cout << "\nBoard status after " << s1 << "'s win:" << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << arr[i][j] << "  ";
                }
                cout << endl;
            }
            cout << endl;
            break;
        }
        if (flag == 2)
        {
            cout << "\n"
                 << s2 << " wins the game" << endl;

            cout << "\nBoard status after " << s2 << "'s win:" << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << arr[i][j] << "  ";
                }
                cout << endl;
            }
            cout << endl;
            break;
        }
        m -= 1;
        int k;
        cout << s2 << "'s position in board:";
        cin >> k;
        if (k == 1)
        {
            x = 0;
            y = 0;
        }
        else if (k == 2)
        {
            x = 0;
            y = 1;
        }
        else if (k == 3)
        {
            x = 0;
            y = 2;
        }
        else if (k == 4)
        {
            x = 1;
            y = 0;
        }
        else if (k == 5)
        {
            x = 1;
            y = 1;
        }
        else if (k == 6)
        {
            x = 1;
            y = 2;
        }
        else if (k == 7)
        {
            x = 2;
            y = 0;
        }
        else if (k == 8)
        {
            x = 2;
            y = 1;
        }
        else if (k == 9)
        {
            x = 2;
            y = 2;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr[x][y] = 2;
            }
        }

        cout << "\nCurrent board status:" << endl;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << "  ";
            }
            cout << endl;
        }

        cout << endl;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1)
                {
                    flag = 1;
                }
                if (arr[0][0] == 1 && arr[1][0] == 1 && arr[2][0] == 1)
                {
                    flag = 1;
                }
                if (arr[0][0] == 1 && arr[0][1] == 1 && arr[0][2] == 1)
                {
                    flag = 1;
                }
                if (arr[2][0] == 1 && arr[2][1] == 1 && arr[2][2] == 1)
                {
                    flag = 1;
                }
                if (arr[0][2] == 1 && arr[1][2] == 1 && arr[2][2] == 1)
                {
                    flag = 1;
                }
                if (arr[0][2] == 1 && arr[1][1] == 1 && arr[2][0] == 1)
                {
                    flag = 1;
                }
                if (arr[0][1] == 1 && arr[1][1] == 1 && arr[2][1] == 1)
                {
                    flag = 1;
                }
                if (arr[1][0] == 1 && arr[1][1] == 1 && arr[1][2] == 1)
                {
                    flag = 1;
                }
                if (arr[0][0] == 2 && arr[1][1] == 2 && arr[2][2] == 2)
                {
                    flag = 2;
                }
                if (arr[0][0] == 2 && arr[1][0] == 2 && arr[2][0] == 2)
                {
                    flag = 2;
                }
                if (arr[0][0] == 2 && arr[0][1] == 2 && arr[0][2] == 2)
                {
                    flag = 2;
                }
                if (arr[2][0] == 2 && arr[2][1] == 2 && arr[2][2] == 2)
                {
                    flag = 2;
                }
                if (arr[0][2] == 2 && arr[1][2] == 2 && arr[2][2] == 2)
                {
                    flag = 2;
                }
                if (arr[0][2] == 2 && arr[1][1] == 2 && arr[2][0] == 2)
                {
                    flag = 2;
                }
                if (arr[0][1] == 2 && arr[1][1] == 2 && arr[2][1] == 2)
                {
                    flag = 2;
                }
                if (arr[1][0] == 2 && arr[1][1] == 2 && arr[1][2] == 2)
                {
                    flag = 2;
                }
            }
        }

        if (flag == 1)
        {
            cout << "\n"
                 << s1 << " wins the game" << endl;
            cout << "\nBoard status after " << s1 << "'s win:" << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << arr[i][j] << "  ";
                }
                cout << endl;
            }
            cout << endl;
            break;
        }
        if (flag == 2)
        {
            cout << "\n"
                 << s2 << " wins the game" << endl;

            cout << "\nBoard status after " << s2 << "'s win:" << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << arr[i][j] << "  ";
                }
                cout << endl;
            }
            cout << endl;
            break;
        }

        m -= 1;
    }
    if (flag == 0)
    {
        cout << "\n"
             << "It's a draw" << endl;
        cout << "\nCurrent board status after draw:" << endl;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << "  ";
            }
            cout << endl;
        }
    }
    cout << "\nThank you for playing" << endl;
    cout << endl;
}