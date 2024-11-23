#include <iostream>
using namespace std;

int main(){
    int i,k=1;
    for(i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}

//alternate solution

int main(){
    int i;
    for(i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<(i*5)+j<<" ";
        }
        cout<<endl;
    }
    return 0;
}