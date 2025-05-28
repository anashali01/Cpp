#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
int main()
{
    Node *head = NULL;
    head = new Node();
    cout << "Enter data for the first node: ";
    cin >> head->data;
    head->next = NULL;

    Node *current = head;


    return 0;
}