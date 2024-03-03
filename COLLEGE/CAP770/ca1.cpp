// Create a singly linked list and insert 3 elekemnts to it by uing insert() function and find out minimum number out of these
#include <iostream>
#include <climits>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insert(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int printmin(Node *head)
{
    int min = head->data;
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data < min)
        {
            min = curr->data;
        }
        curr = curr->next;
    }
    return min;
}

int main()
{
    Node *head = NULL;
    head = insert(head, 140);
    head = insert(head, 330);
    head = insert(head, 50);

    cout << "Minimum is :" << printmin(head) << endl;
}
