#include <iostream>
using namespace std;

int main(){
    int i;
    for(i=97;i<102;i++){
        for(int j=0;j<5;j++){
            cout<<char(i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//alternate solution

int main(){
    int i;
    for(i=1;i<=5;i++){
        char name= 'a'+i-1;
        for(int j=1;j<=5;j++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
}