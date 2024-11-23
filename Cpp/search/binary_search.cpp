#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int start=0;
    int end=10;
    int key;
    cin>>key;
    while (start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<"found at index: "<<mid;
            break;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
}