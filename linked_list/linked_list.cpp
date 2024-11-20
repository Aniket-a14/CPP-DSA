#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};


//we assume linked list is already created and head is already pointing to one address
// int main(){                 
//     Node* temp;
//     temp = new Node(45);
//     temp->next=head;
//     head=temp;
// }

int main(){
    Node *head;
    head = new Node(4);
    cout<<head->data<<" "<<head->next;
}