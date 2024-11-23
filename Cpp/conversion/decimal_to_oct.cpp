#include<iostream>
using namespace std;

int main(){
    int n,rem=0,sum=0,mul=1;
    cin>>n;

    while(n!=0){
        rem=n%8;
        sum+=rem*mul;
        n/=8;
        mul*=10;
    }
    cout<<sum;
}