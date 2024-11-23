#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

node* createLinkedList(int arr[], int index, int size){
    if(index==size){
        return NULL;
    }
    node* temp= new node(arr[index]);
    temp->next=createLinkedList(arr,index+1,size);
    return temp;
}

// node *createLinkedList(int arr[], int index, int size, node *prev)
// {
//     if (index == size)
//     {
//         return prev;
//     }
//     node *temp = new node(arr[index]);
//     temp->next = prev;
//     return createLinkedList(arr, index + 1, size, temp);
// }

int main()
{
    node *head = NULL;
    //node *prev = head;
    int arr[] = {23, 6, 4, 6, 44, 6, 3, 3, 5, 53, 6, 53};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    head = createLinkedList(arr, index, size);

    

    // inserting at any position
    //  int x=3;
    //  node* temp2= head;
    //  x--;
    //  while(x--){
    //      temp2= temp2->next;
    //  }
    //  node* temp3= new node(300);
    //  temp3->next=temp2->next;
    //  temp2->next=temp3;



    // deleting a node from start
    //  if(head!=NULL){
    //      node*temp2=head;
    //      head=head->next;
    //      delete temp2;
    //  }

    

    // deleting a node from end
    // if (head != NULL)
    // {
    //     if (head->next == NULL)
    //     {
    //         node *temp2 = head;
    //         head = NULL;
    //         delete temp2;
    //     }
    //     else
    //     {
    //         node *temp2 = head;
    //         node *temp3 = NULL;
    //         while (temp2->next != NULL)
    //         {
    //             temp3 = temp2;
    //             temp2 = temp2->next;
    //         }
    //         temp3->next = NULL;
    //         delete temp2;
    //     }
    // }




    // delete particular node
    // int x = 1;
    // x--;
    // node *curr = head;
    // node *prev1 = NULL;
    // if (x < 1)
    // {
    //     head = head->next;
    //     delete curr;
    // }
    // else
    // {
    //     while (x--)
    //     {
    //         prev1 = curr;
    //         curr = curr->next;
    //     }
    //     if (curr->next == NULL)
    //     {
    //         prev1->next = NULL;
    //         delete curr;
    //     }
    //     else
    //     {
    //         prev1->next = curr->next;
    //         delete curr;
    //     }
    // }


    //rotate a list
    // node* prev=NULL,*front=NULL,*curr=head;
    // while(curr){
    //     front=curr->next;
    //     curr->next=prev;
    //     prev=curr;
    //     curr=front;
    // }


    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
