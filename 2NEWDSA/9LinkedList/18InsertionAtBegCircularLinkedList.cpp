#include <iostream>

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

Node *insertBeg(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
}
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return temp;
    }
}
void printlist(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    for (Node *p = head->next; p != head; p = p->next)
    {
        cout << p->data << " ";
    }
    cout << endl;
}

// void printlistRev(Node *head)
// {
//     if (head == NULL)
//     {
//         return;
//     }
//     printlistRev(head->next);
//     cout << head->data << " ";
// }

int main()
{
    Node *head = NULL;
    head = insertBeg(head, 30);
    head = insertBeg(head, 40);
    head = insertBeg(head, 50);
    head = insertBeg(head, 60);

    printlist(head);

    head = insertEnd(head, 70);
    head = insertEnd(head, 80);
    head = insertEnd(head, 90);
    head = insertEnd(head, 100);

    printlist(head);
}
