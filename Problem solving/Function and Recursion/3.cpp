#include<iostream>
using namespace std ;

int factorial(int n){
    if(n==0)
    return 1;
    else 
    return n*(factorial(n-1));
}
int main()
{
    int n,fact;
    cin>>n;
    fact=factorial(n);
    cout<<fact<<endl;
    return 0 ;
}