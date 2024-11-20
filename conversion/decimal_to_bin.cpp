#include<iostream>
using namespace std;

int main(){
    int n,sum=0,rem=0,mul=1;
    cin>>n;
    while(n!=0){
        //rem = n%2;
        rem = n&1;
        sum+=rem * mul;
        n/=2;
        mul*=10;
    }
    cout<<sum;
}