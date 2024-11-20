#include<iostream>
using namespace std;

class Node
{
    public:
    int data,height;
    Node* left, *right;

    Node(int value){
        data=value;
        height=1;
        left=right=NULL;
    }
};

int getheight(Node* root){
    if(!root){
        return 0;
    }

    return root->height;
}

int getbalance(Node* root){
    return getheight(root->left)-getheight(root->right);
}

Node* rightRotation(Node* root){
    Node* child = root->left;
    Node* childRight = child->right;

    child->right=root;
    root->left=childRight;

    root->height= 1+max(getheight(root->left),getheight(root->right));
    child->height= 1+max(getheight(child->left),getheight(child->right));

    return child;
}

Node* leftRotation(Node* root){
    Node* child = root->right;
    Node* childLeft= child->left;

    child->left=root;
    root->right=childLeft;

    root->height= 1+max(getheight(root->left),getheight(root->right));
    child->height= 1+max(getheight(child->left),getheight(child->right));

    return child;

}

Node* insert(Node* root,int key){
    if(!root){
        return new Node(key);
    }

    if(key<root->data){
        root->left=insert(root->left,key);
    }else if(key>root->data){
        root->right=insert(root->right,key);
    }else{
        return root;
    }

    root->height = 1+max(getheight(root->left),getheight(root->right));

    //balancing
    int balance = getbalance(root);

    if(balance>1&& key<root->left->data){
        return rightRotation(root);
    }else if(balance<-1&& root->right->data<key){
        return leftRotation(root);
    }else if(balance>1 && key>root->left->data){
        root->left=leftRotation(root->left);
        return rightRotation(root);
    }else if(balance<-1 && root->right->data>key){
        root->right=rightRotation(root->right);
        return leftRotation(root);
    }else{
        return root;
    }
}

void preorder(Node* root){
    if(!root){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(!root){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root=NULL;
    root= insert(root,10);
    root= insert(root,20);
    root= insert(root,40);
    root= insert(root,15);
    root= insert(root,30);
    root= insert(root,0);
    root= insert(root,6);

    cout<<"preorder: "<<endl;
    preorder(root);

    cout<<endl<<"inorder: "<<endl;
    inorder(root);
}