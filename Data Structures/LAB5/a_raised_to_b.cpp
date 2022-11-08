#include<iostream>
using namespace std ;
int power(int a,int b){
    if(b==0)
    return 1;
    else
    return a*power(a,b-1);
}
int main()
{
    int a,b;
    cout<<"Enter the number and power respectively:"<<endl;
    cin>>a>>b;
    int pow=power(a,b);
    cout<<a<<" raised to power "<<b<<" is: "<<pow<<endl;
    return 0 ;
}