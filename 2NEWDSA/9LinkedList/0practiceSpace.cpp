#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

Node *insertbeg(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

Node *insertend(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == nullptr)
    {
        return temp;
    }
    Node *curr = head;
    while (curr->next != nullptr)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head; // Return head here to preserve the original head
}

Node *insertpos(Node *head, int pos, int x)
{
    Node *temp = new Node(x);
    if (head == nullptr || pos == 1)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for (int i = 1; i < pos - 1 && curr != nullptr; i++)
    {
        curr = curr->next;
    }
    if (curr == nullptr)
    {
        return head; // Return head if position is out of bounds
    }
    temp->next = curr->next;
    curr->next = temp;
    return head; // Return head here to preserve the original head
}

Node *reverselist(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    Node *prev = nullptr;
    Node *curr = head;
    Node *next = nullptr;

    while (curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

void printlist(Node *head)
{
    if (head == nullptr)
    {
        return;
    }
    cout << head->data << " ";
    printlist(head->next);
}

Node *delf(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    Node *temp = head->next;
    delete head;
    return temp; // Return the new head after deleting the first node
}

Node *dele(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *curr = head;
    while (curr->next->next != nullptr)
    {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = nullptr;
    return head;
}

Node *delp(Node *head, int pos)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (pos == 1)
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }
    Node *prev = nullptr;
    Node *curr = head;
    int cnt = 1;
    while (curr != nullptr && cnt < pos)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    if (curr == nullptr)
    {
        return head;
    }
    prev->next = curr->next;
    delete curr;
    return head;
}

int main()
{
    Node *head = NULL;

    head = insertbeg(head, 50);
    head = insertbeg(head, 40);
    head = insertbeg(head, 30);

    head = insertend(head, 60); // Should return head to preserve it
    head = insertend(head, 70); // Should return head to preserve it
    head = insertend(head, 80); // Should return head to preserve it

    head = insertpos(head, 4, 90);
    head = insertpos(head, 5, 100);
    head = insertpos(head, 6, 110);

    head = reverselist(head);

    printlist(head);
    cout << endl;

    head = delf(head);
    printlist(head);
    cout << endl;

    head = dele(head);
    printlist(head);
    cout << endl;

    head = delp(head, 4);
    printlist(head);
    cout << endl;
}
