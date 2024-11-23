#include<iostream>
using namespace std;

int main(){
    int arr[]={34,24,7,5,47,29,68};

    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}