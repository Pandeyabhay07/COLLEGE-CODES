#include<iostream>
#include<cmath>
using namespace std ;

bool isprime(int num){
     for(int i=2;i<=num/2;i++)
     {
        if(num%i==0)
        return false;
      
     }
     return true;
}

int main()
{
    int a,b;
    cout<<"Enter the range above 2 a and b:"<<endl;
    cin>>a>>b;
   for(int i=a;i<=b;i++)
   {
    if(isprime(i))
    {
        cout<<i<<" ";
    }
    }
    return 0 ;
}