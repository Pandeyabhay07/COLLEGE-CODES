#include<iostream>
using namespace std ;

int main()

{
     int n,m,p,q;
    cin>>n>>m>>p>>q;
    if(m==p){
    int arr[n][m];
    int brr[m][q];
    int ans[n][q];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
     }
     
      for(int i=0;i<m;i++){
        for(int j=0;j<q;j++)
            cin>>brr[i][j];
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<q;j++)
            ans[i][j]=0;
     }

     for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<m;k++)
             ans[i][j]+=arr[i][k]*brr[k][j];
        }
    }

     for(int i=0;i<n;i++){
        for(int j=0;j<q;j++)
            cout<<ans[i][j]<<" ";
           cout<<endl;
     }
     }
    return 0 ;
}