#include<iostream>
using namespace std;

int main(){
    int i;
    for(i=4;i>=0;i--){
        for(int j=i;j>0;j--){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    return 0;
}