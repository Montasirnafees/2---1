#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void printLinkedList(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    int n;
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    for(int i = 1; i <= n; i++)
    {
        Node* newNode = new Node;

        newNode->data = i;
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

    printLinkedList(head);

    return 0;
}
