#include<iostream>
using namespace std ;

double fact(int n){
    if(n==0)
    return 1;

    else 
    return n*fact(n-1);
}

double power(int x,int i){
    if(i==0)
    return 1;

    else 
    return x*power(x,i-1);
}

int main()
{
    int x,n;
    
    cin>>x>>n;
    double sum=0;
    for(int i=1;i<n;i++){
        
        sum+=((power(x,i))/(fact(i)));
    }
    cout<<1+sum;
    return 0 ;
}