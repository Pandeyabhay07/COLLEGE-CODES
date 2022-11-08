#include<iostream>
using namespace std ;

int main()

{
    int n;
    cin>>n;
    int i=1;
    int j=1;
   for(int i=1;i<=n;i++){
    int count=i;
    for(int j=1;j<=i;j++){
        cout<<count;
        count++;
    }
    cout<<endl;
   }
    
    return 0 ;
}