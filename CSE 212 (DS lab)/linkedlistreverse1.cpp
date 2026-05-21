#include<iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

int main()
{
    int n;
    cin >> n;

    Node *head = NULL;
    Node *tail = NULL;

    // Linked List create
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        Node *newNode = new Node;

        newNode->value = x;
        newNode->next = NULL;

        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Reverse Linked List
    Node *prev = NULL;
    Node *current = head;
    Node *nextNode;

    while(current != NULL)
    {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    head = prev;

    // Print
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    return 0;
}
