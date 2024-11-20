#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,sum1=0,sum2=0,rem1=0,rem2=0,count=0;
    cin>>n; //101000
    while(n!=0){
        rem1= n%10;
        sum1+= rem1 * pow(2,count);
        n/=10;
        count++;
    }

    int mul=1;
    while(sum1!=0){
        rem2=sum1%8;
        sum2+=rem2*mul;
        sum1/=8;
        mul*=10;
    }
    cout<<sum2;
}