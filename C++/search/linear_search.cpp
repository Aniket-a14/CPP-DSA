#include<iostream>
using namespace std;

void search(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            cout<<"Element found at index: "<<i;
        }
    }
}

int main(){
    int n,key;
    cout<<"Enter total elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter key: ";
    cin>>key;

    search(arr,n,key);
}