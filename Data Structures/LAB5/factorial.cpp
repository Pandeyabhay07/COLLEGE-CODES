#include<iostream>
using namespace std ;
int fact(int n){
    if(n==0)
    return 1;
    else 
    return n*fact(n-1);
}
int main()

{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int factorial=fact(n);
    cout<<"Factorial of given no. is:"<<factorial<<endl;
    return 0 ;
}