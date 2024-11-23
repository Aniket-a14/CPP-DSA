#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top;
    public:
        bool flag=1;

        Stack(int s){
            size=s;
            top=-1;
            arr= new int[s];
        }

        void push(int value){
            if(top==size-1){
                cout<<"Stack overflow"<<endl;
            }
            else{
                top++;
                arr[top]=value;
                cout<<"Pushed value is: "<<value<<endl;
                flag = 0;
            }
        }

        void pop(){
            if(top==-1){
                cout<<"Stack underflow";
            }
            else{
                top--;
                cout<<"Popped value is: "<<arr[top+1]<<endl;
                if(top==-1){
                    flag=1;
                }
            }
        }

        int peek(){
            if(top==-1){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            else{
                cout<<"Pekked value is: ";
                return arr[top];
            }
        }

        bool Isempty(){
            return top==-1; 
        }

        int Issize(){
            return top+1;
        }
};

int main(){
    Stack S(5);
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(-1);
    int value = S.peek();
    if(S.flag==0)
    cout<<value<<endl;
}