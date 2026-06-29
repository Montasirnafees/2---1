#include<iostream>
using namespace std;

struct Node
{
    int value;
    Node* next;
};
void printlist(Node* head)
{
    Node* temp = head;
    while(head != NULL)
    {

        cout<<temp->value<<" ";
        temp = temp->next;
    }
}
    int main()
    {
        Node* one =new Node;
        Node* two =new Node;
        Node* three =new Node;
        one->value=1;
        two->value=2;
        three->value=3;
        one->next=two;
        two->next=three;
        three->next=NULL;
        Node* head=one;
        printlist(head);
        return 0;
    }

