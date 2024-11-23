#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *left, *right;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};

Node *insert(Node *root, int target){
    if (!root){
        Node *temp = new Node(target);
        return temp;
    }

    if (target < root->data){
        root->left = insert(root->left, target);
    }else{
        root->right = insert(root->right, target);
    }
    return root;
}

void traversal(Node* root){
    if(!root){
        return;
    }

    traversal(root->left);
    cout<<root->data<<" ";
    traversal(root->right);
}

void search(Node* root, int target){
    if(!root){
        cout<<"Data not found";
        return;
    }

    if(root->data==target){
        cout<<"Data found";
    }

    if(target>root->data){
        search(root->right,target);
    }else{
        search(root->left, target);
    }
}

int main(){
    int arr[] = {10, 22, 43, 88, 62,55, 63, 79, 61, 19};
    Node *root = NULL;

    for (int i = 0; i < 9; i++){
        root = insert(root, arr[i]);
    }

    cout<<"Inorder traversal: ";
    traversal(root);

    int to_find;
    cout<<endl<<"Data to find: ";
    cin>>to_find;
    search(root, to_find);

    return 0;
}