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
    
    Node *current = new Node();
    current->data = 10;
    current->next = NULL;
    head->next = current;

    current = new Node();
    current->data = 100;
    current->next = NULL;
    head->next->next = current;

    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    return 0;
}