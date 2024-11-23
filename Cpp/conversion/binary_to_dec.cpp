#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,rem=0,sum=0,count=0;
    cin>>n;
    while(n!=0){
        rem= n%10;
        sum+= rem * pow(2,count);
        n/=10;
        count++;
    }
    cout<<sum;
}