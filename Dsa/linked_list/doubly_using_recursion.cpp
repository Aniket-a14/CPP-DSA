#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }
};

node* createlinkedlist(int arr[],int index,int size,node* back){
    if(index==size){
        return NULL;
    }
    node* temp= new node(arr[index]);
    temp->prev=back;
    temp->next=createlinkedlist(arr,index+1,size,temp); 
    return temp;
}

int main(){
    node *head,*tail;
    int arr[]={1,2,3,5,6,7};
    head=createlinkedlist(arr,0,6,NULL);
}