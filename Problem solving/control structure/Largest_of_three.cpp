#include<iostream>
using namespace std ;

int largest(int l,int m,int n)
{
    if(l>m)
    {
       if(l>n)
       {
           return l;
       }
    }
    else{
        if(m>n)
        {
            return m;

        }
        else
        {
            return n;

        }
    }
    return 0;
}


int main()

{
    int a,b,c;
    cout<<"Enter the numbers: "<<endl;
    cin>>a>>b>>c;
    
    cout<<"The largest of three is: "<<largest(a,b,c)<<endl;
   
    return 0 ;
}