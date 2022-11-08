#include<iostream>
using namespace std ;

int main()

{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int count=1;
        for(int j=i;j<=n;j++)
       { cout<<count<<" ";
         count++;}

        for(int k=1;k<i;k++)
        cout<<"  ";

        for(int l=1;l<i;l++)
        cout<<"  ";
        
        int x=i;
        for(int m=i;m<=n;m++)
       {
       
        cout<<n-x+1<<" ";
        x++;
       }

        cout<<endl;
    }
    return 0 ;
}