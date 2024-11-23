#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int value){
            data=value;
            next=NULL;
        }
};

class Stack{
    Node* top;
    int size;
    public:
    bool flag=1;
    Stack(){
        top= NULL;
        size=0;
    }

    void push(int value){
        Node* temp= new Node(value);
        if(temp==NULL){
            cout<<"Stack Overflow"<<endl;
            return;
        }else{
            temp->next=top;
            top=temp;
            size++;
            flag=0;
            cout<<"Pushed element: "<<temp->data<<endl;
        }
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow"<<endl;
            flag=1;
        }else{
            Node* temp=top;
            top=top->next;
            cout<<"Popped element: "<<temp->data<<endl;
            delete temp;
            size--;
        }
    }

    int peek(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }else{
            cout<<"Peeked Element: ";
            return top->data;
        }
    }

    bool IsEmpty(){
        return top==NULL;
    }

    int IsSize(){
        return size;
    }
};

int main(){
    Stack S;
    //S.push(5);
    S.push(-1);
    //S.pop();
    int value = S.peek();
    if(S.flag==0)
    cout<<value<<endl;
}