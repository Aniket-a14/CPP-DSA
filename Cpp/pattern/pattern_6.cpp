#include<iostream>
using namespace std;

// int main(){
//     int i;
//     for(i=1;i<=5;i++){
//         int k=1;
//         for(int j=0;j<5;j++){
//             cout<<k<<" ";
//             k++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//alternate solution without k

int main(){
    int i;
    for(i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}