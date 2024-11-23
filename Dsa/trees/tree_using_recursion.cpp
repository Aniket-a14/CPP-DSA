#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left, *right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};

Node* BinaryTree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node* temp= new Node(x);
    cout<<"Enter left child of "<<x<<" : ";  
    temp->left= BinaryTree();
    cout<<"Enter right child of "<<x<<" : ";
    temp->right= BinaryTree();
    return temp;
}

int main(){
    cout<<"Enter root node: ";
    Node* root= BinaryTree();
    return 0;
}