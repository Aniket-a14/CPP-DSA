#include<iostream>
#include<queue>
#include<vector>
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

int main(){
    queue<Node*> arr;

    int x;
    cout<<"Enter root element: ";
    cin>>x;
    int first,second;

    Node* root= new Node(x);
    arr.push(root);

    while(!arr.empty()){
        Node* temp=arr.front();
        arr.pop();

        cout<<"Enter the left child  of "<<temp->data<<" : ";
        cin>>first;

        if(first!=-1){
            temp->left= new Node(first);
            arr.push(temp->left);
        }

        cout<<"Enter the right child of "<<temp->data<<" : ";
        cin>>second;

        if(second!=-1){
            temp->right= new Node(second);
            arr.push(temp->right);
        }
    }

    queue<Node*> ans;
    ans.push(root);
    vector<int> arr;

    while(!ans.empty()){
        Node* temp= ans.front();
        ans.pop();

        arr.push_back(temp->data);

        if(temp->left!=NULL){
            ans.push(temp->left);
        }

        if(temp->right!=NULL){
            ans.push(temp->right);
        }

    }
}