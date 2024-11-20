#include <iostream>
using namespace std;

int main(){
    for(int i=97;i<102;i++){
        for(int j=97;j<=i;j++){
            cout<<char(i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}