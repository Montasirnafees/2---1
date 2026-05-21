
#include<iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    int n;
    cin >> n;

    Node *head = NULL;
    Node *tail = NULL;

    // Linked List input
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        Node *newNode = new Node();
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

    // Print reversed list
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    return 0;
} //https://chatgpt.com/share/6a0e6bdd-2c44-83a6-b695-24ad94dac104
