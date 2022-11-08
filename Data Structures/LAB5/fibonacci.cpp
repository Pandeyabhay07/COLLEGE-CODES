#include<iostream>
using namespace std ;

int fibo(int n){
    if(n<=1)
    return n;

    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    cout<<n<<"th fibonacci number is:"<<fibo(n-1)<<endl;
    return 0 ;
}