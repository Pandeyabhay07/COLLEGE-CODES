#include<iostream>
using namespace std ;

int main()

{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<"* ";
        for(int k=i;k<n;k++)
        cout<<"  ";
        for(int l=i;l<n;l++)
        cout<<"  ";
        for(int m=1;m<=i;m++)
        cout<<"* ";
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++)
        cout<<"* ";
        for(int k=1;k<i;k++)
        cout<<"  ";
        for(int l=1;l<i;l++)
        cout<<"  ";
        for(int m=i;m<=n;m++)
        cout<<"* ";
        cout<<endl;

    }
    return 0 ;
}