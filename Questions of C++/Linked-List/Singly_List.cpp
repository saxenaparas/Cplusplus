/*
Linked-List:
=========================
       ------------------
Node : | Data | Nxt ptr |
       ------------------
            (Head)
=========================
*/

#include <iostream>
using namespace std;

// Here, we have created {node} key_word as a data_type (eg: like int & char).
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Consider [node] word as a data_type.

// Insertion :
// 1.
void InsertAtEnd(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// 2.
void InsertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

// Deletion : (By value)
void Deletion(node *&head, int val)
{
    node *temp = head;

    while (temp->next->data != val)
        temp = temp->next;

    node *todelete = temp->next;

    temp->next = temp->next->next;

    delete todelete;
}

// Searching :
bool Search(node *&head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (key == temp->data)
            return true;

        temp = temp->next;
    }
    return false;
}

// Display :
void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    InsertAtEnd(head, 1);
    InsertAtEnd(head, 2);
    InsertAtEnd(head, 3);
    InsertAtEnd(head, 4);

    InsertAtHead(head, 5);

    display(head);

    if (Search(head, 6))
        cout << "Yes Exist" << endl;
    else
        cout << "Not Exist" << endl;

    Deletion(head,3);

    display(head);
    return 0;
}
