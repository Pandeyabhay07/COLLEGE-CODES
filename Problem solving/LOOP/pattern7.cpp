#include<iostream>
using namespace std ;

int main()

{   int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int space=n-i;
        int count=i;
        for(int i=0;i<space;i++)
        cout<<" ";

        for(int j=1;j<=i;j++){
        //    int count=i;
            cout<<count;
            count--;
        }
        int c=2;
        for(int k=2;k<=i;k++){
            cout<<c;
            c++;
            
        }
        cout<<endl;
    }
    return 0 ;
}