#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* left,*right;
    Node(int value){
        value=value;
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

void PreOrdertraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->value<<" ";
    PreOrdertraversal(root->left);
    PreOrdertraversal(root->right);
}

void InOrdertraversal(Node* root){
    if(root==NULL){
        return;
    }
    InOrdertraversal(root->left);
    cout<<root->value<<" ";
    InOrdertraversal(root->right);
}

void PostOrdertraversal(Node* root){
    if(root==NULL){
        return;
    }
    PostOrdertraversal(root->left);
    PostOrdertraversal(root->right);
    cout<<root->value<<" ";
}

int main(){
    cout<<"Enter root node: ";
    Node* root= BinaryTree();
    PreOrdertraversal(root);
    InOrdertraversal(root);
    PostOrdertraversal(root);
}