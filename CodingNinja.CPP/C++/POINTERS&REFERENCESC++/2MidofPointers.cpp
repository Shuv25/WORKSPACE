#include <iostream>

using namespace std;

void print(int *r)
{
    cout << *r << endl;
}

void update(int *r)
{
    *r = *r + 1; // call by refrence
}

int getSum(int *arr2, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr2[i];
    }

    return sum;
}
int main()
{
    int arr[10] = {2, 3, 4, 5};
    cout << "Adress of first memory block is:" << arr << endl;
    cout << "Adress of first memory block is:" << &arr[0] << endl;
    cout << *arr << endl;       // it will print the value at 0th index
    cout << *arr + 1 << endl;   // it will add 1 one to the value present at 0th index
    cout << *(arr + 1) << endl; // it will go to the first index and print the value present on that place
    cout << *(arr + 2) << endl; // will print the value at 2nd index of the array

    cout << endl;

    int a[10] = {1, 22, 3, 4, 5};

    cout << a << endl; // address of a

    int *p = &a[0];     // storing the adress of a
    cout << p << endl;  // printing the adress of a
    cout << *p << endl; // printing the vlue present at first index of a array
    cout << &p << endl; // adress of p

    // Char Array
    cout << endl;

    char ch[6] = "abcde";
    cout << ch << endl;
    cout << &ch << endl;
    char *c = &ch[0];
    cout << c << endl;
    cout << *c << endl;
    cout << &c << endl;

    // Functions

    cout << endl;

    int z = 5;
    int *r = &z;

    print(r);
    update(r);
    print(r);

    cout << endl;

    int arr2[6] = {1, 2, 3, 4, 5, 6};

    cout << getSum(arr2 + 3, 3);
}