// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={23,6,14,67,34,87};
//     for(int i=0;i<5;i++){
//         int index=i;
//         for(int j=i+1;j<6;j++){
//             if(arr[j]<arr[index]){
//                 index=j;
//             }
//         }
//         swap(arr[i],arr[index]);
//     }

//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
// }


//Reverse selection sort

#include<iostream>
using namespace std;

int main(){
    int arr[]={23,54,2,56,35,66};
    for(int i=6;i>0;i--){
        int index=i;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}