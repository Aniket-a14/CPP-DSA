#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int front,rear,size;

    public:
        Queue(int value){
            arr= new int[value];
            front=rear=-1;
            size=value;
        }

        bool isEmpty(){
            return front==-1;
        }

        bool isFull(){
            return rear==size-1;
        }

        void push(int data){
            if(isEmpty()){
                cout<<"Pushed item: "<<data<<endl;
                front=rear=0;
                arr[0]=data;
            }
            else if(isFull()){
                cout<<"Queue overflow";
                return;
            }else{
                cout<<"Pushed item: "<<data<<endl;
                rear++;
                arr[rear]=data;
            }
        }

        void pop(){
            if(isEmpty()){
                cout<<"Queue underflow";
                return;
            }else{
                if(front==rear){
                    front=rear=-1;
                }else{
                    cout<<"Popped element: "<<arr[front]<<endl;
                    front++;
                }
            }
        }

        int start(){
            if(isEmpty()){
                cout<<"Queue underflow"<<endl;
                return -1;
            }else{
                return arr[front];
            }
        }
};

int main(){
    Queue q(5);
    q.push(4);
    q.push(2);
    q.push(7);
    q.push(9);
    q.pop();
    cout<<q.isEmpty()<<endl;
    cout<<q.isFull()<<endl;
    cout<<"Element at the start: "<<q.start();
}