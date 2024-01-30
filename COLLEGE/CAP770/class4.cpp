#include <iostream>

using namespace std;

class A
{
private:
    int n;
    int *arr;

public:
    A(int ne)
    {
        n = ne;
        arr = new int[n];
    }

    void trav()
    {
        cout << "Enter the elements of the array:";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void ser()
    {
        cout << "Enter the elements of the array:";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int s;
        cout << "Enter the element you want to search:";
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == s)
            {
                cout << i << endl;
            }
        }
    }

    void sr()
    {
        cout << "Enter the elements of the array:";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void in()
    {
        cout << "Enter the elements of the array:";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ele;
        cout << "Entre ele:";
        cin >> ele;
        int pos;
        cout << "Enter pos:";
        cin >> pos;
        for (int c = n - 1; c >= pos; c--)
        {
            arr[c + 1] = arr[c];
        }
        arr[pos] = ele;
        n++;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    void del()
    {
        cout << "Enter the elements of the array:";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int delelement;
        cout << "Enter the element:";
        cin >> delelement;
        int i;
        for (i = 0; i < n; i++)
        {
            if (arr[i] == delelement)
            {
                break;
            }
        }
        for (int j = i; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        n--;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    ~A()
    {
        delete[] arr;
    }
};

int main()
{
    int n;
    cout << "Enter 1 to 7 any number:";
    cin >> n;
    int m;
    cout << "Enter the size of the array:";
    cin >> m;
    A a(m);

    switch (n)
    {
    case 1:
        a.trav();
        break;
    case 2:
        a.ser();
        break;
    case 3:
        a.sr();
        break;
    case 4:
        a.in();
        break;
    case 5:
        a.del();
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

    return 0;
}
