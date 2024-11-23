#include<iostream>
using namespace std;

// int main(){
//     int i,k=1;
//     for(i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cout<<k<<" ";
//         }
//         cout<<endl;
//         k++;
//     }
//     return 0;
// }


//Alternate solution without k(other variable)

int main(){
    int i;
    for(i=1;i<=5;i++){
        for(int j=0;j<5;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}