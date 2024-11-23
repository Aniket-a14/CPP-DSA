#include<iostream>
#include<vector>
using namespace std;

template <typename T>
void evenorodd(vector<T>& arr,T n, T&even, T&odd){
    even=0;
    odd=0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even+=arr[i];
        }else{
            odd+=arr[i];
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;

    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++){
        int value;cin>>value;
        arr.push_back(value);
    }

    int evenSum,oddSum;
    evenorodd(arr,n,evenSum,oddSum);

    cout<<"Even numbers sum is: "<<evenSum<<endl<<"and odd numbers sum is: "<<oddSum;
}