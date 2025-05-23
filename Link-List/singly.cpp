#include <iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
};
int main()
{
    Node *head = NULL;
    head = new Node();
    head->data = 1;
    head->next = NULL;

    Node *second = new Node();
    second->data = 2;
    second->next = NULL;
    head->next = second;

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    
    return 0;
}