#include<iostream>
using namespace std;

int main(){
    int i;
    for(i=0;i<5;i++){
        for(int j=1;j<=5;j++){
            cout<<j*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}