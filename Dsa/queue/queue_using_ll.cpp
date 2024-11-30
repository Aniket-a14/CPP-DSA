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

class Queue{
    public:
        Node* front;
        Node* rear;
        
        Queue(){
            front=rear=NULL;
        }

        void push(int value){
            cout<<value<<" pushed into the queue"<<endl;
            Node* newnode = new Node(value);
            if(rear==NULL){
                front=rear=newnode;
            }else{
                rear->next=newnode;
                rear= newnode;
            }
        }

        void dequeue() {
            if (front == NULL) {
                cout << "Queue is empty. Cannot dequeue.\n";
                return;
            }
            Node* temp = front;
            cout<<temp->data<<" is dequeued from the queue"<<endl;
            front = front->next;
            
            if (front == NULL) {
                rear = NULL;
            }
            delete temp;
        }

        void peek(){
            if(front==NULL){
                cout<<"No element to peek"<<endl;
                return;
            }

            cout<<"Peeked element "<<front->data<<endl;
        }

        bool isEmpty(){
            return front==NULL;
        }
};

int main(){
    Queue q;
    q.push(10);
    q.push(7);
    q.push(4);
    q.dequeue();
    cout<<q.isEmpty()<<endl;
    q.peek();
}