#include<iostream>
using namespace std ;

int main()

{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int brr[n][m];
    int ans[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
     }
     
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>brr[i][j];
     }

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
    
        {
            ans[i][j]=arr[i][j]+brr[i][j];
            cout<<ans[i][j]<<" ";
        }  
         cout<<endl;
     }
    return 0 ;
}