#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

int main()
{

    // adding elements at the start
    //  if(head==NULL){
    //      head= new node(5);
    //  }
    //  else{
    //      node *temp= new node(5);
    //      temp->next=head;
    //      head->prev=temp;
    //      head=temp;
    //  }

    // adding elements at last
    //  if(head==NULL){
    //      head= new node(5);
    //  }
    //  else{
    //      node* curr=head;
    //      while(curr->next!=NULL){
    //          curr=curr->next;
    //      }
    //      node* temp=new node(5);
    //      curr->next=temp;
    //      temp->prev=curr;
    //  }

    // using for loop
    //  int arr[]={1,2,3,4,5};
    //  node* head=NULL,*tail=NULL;
    //  for(int i=0;i<5;i++){
    //      if(head==NULL){
    //          head= new node(arr[i]);
    //          tail=head;
    //      }
    //      else{
    //          node* temp=new node(arr[i]);
    //          tail->next=temp;
    //          temp->prev=tail;
    //          tail=temp;
    //      }
    //  }


    //insertion at any pos
    // node *curr = head;
    // int pos = 2;
    // if (--pos == 0)
    // {
    //     node *temp = new node(5);
    //     temp->next = head;
    //     head->prev = temp;
    //     head = temp;
    // }
    // else
    // {
    //     while (--pos)
    //     {
    //         curr = curr->next;
    //     }
    //     if (curr->next == NULL)
    //     {
    //         node *temp = new node(5);
    //         curr->next = temp;
    //         temp->prev = curr;
    //     }
    //     else
    //     {
    //         node *temp = new node(5);
    //         temp->next = curr->next;
    //         temp->prev = curr;
    //         curr->next = temp;
    //         temp->next->prev = temp;
    //     }
    // }

    
}