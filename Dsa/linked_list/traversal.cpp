#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }   
};

//to add elements from start or reverse manner
// int main(){
//     node* head;
//     head=NULL;
//     int arr[]={34,6,2,46,4,2,35,43};
//     for(int i=0;i<8;i++){
//         if(head==NULL){
//             head = new node(arr[i]);
//         }
//         else{
//             node* temp;
//             temp= new node(arr[i]);
//             temp->next=head;
//             head=temp;
//         }
//     }
// }


//to add elememts from end or in normal order
int main(){
    node* head= NULL;
    node* tail=head;
    int arr[]={5,75,46,68,645,57,846,66};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(head==NULL){
            head = new node(arr[i]);
            tail= head;
        }
        else{
            tail->next=new node(arr[i]);
            tail=tail->next;   
        }
    }

    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}