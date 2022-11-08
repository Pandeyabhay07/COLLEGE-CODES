#include<iostream>
using namespace std ;

int gcd(int n,int m){
    if(n==0||m==0)
    return 0;
    else if (n==m)
    return n;
    else if(n>m)
    return
     gcd(n-m,m);
     else
     return gcd(n,m-n);
}

int main()
{   
    int n,m;
    cin>>n>>m;
    int result=gcd(n,m);
    cout<<result<<endl;
    return 0 ;
}