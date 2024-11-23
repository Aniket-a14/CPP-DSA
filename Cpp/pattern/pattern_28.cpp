#include<iostream>
using namespace std;

int main(){
    for(int i=4;i>=1;i--){
        for(int j=i;j>1;j--){
            cout<<" ";
        }
        for(int j=4;j>=i;j--){
            cout<<"* ";
        }
        for(int j=i;j>1;j--){
            cout<<"  ";
        }
        cout<<endl;
    }

    for(int i=1;i<=4;i++){
        for(int j=i;j>1;j--){
            cout<<" ";
        }
        for(int j=4;j>=i;j--){
            cout<<"* ";
        }
        for(int j=i;j>1;j--){
            cout<<"  ";
        }
        cout<<endl;
    }
}