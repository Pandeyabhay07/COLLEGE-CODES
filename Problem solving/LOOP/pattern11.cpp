#include<iostream>
using namespace std ;

int main()

{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++)
        cout<<j;

        for(int k=i;k<n;k++)
        cout<<" ";

        for(int l=i;l<n;l++)
        cout<<" ";

        int count=i;
        for(int m=1;m<=i;m++)
        {cout<<count;
         count--;}

        cout<<endl;
    }
    return 0 ;
}