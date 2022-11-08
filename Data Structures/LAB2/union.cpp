#include<iostream>
using namespace std;

void unionArr(int arr[],int brr[],int n,int m,int ans[])
{
   int i=0,j=0,k=0;

   while(i<n&&j<m){

    if(arr[i]<brr[j])
    ans[k++]=arr[i++];
   
    else if(arr[i]=brr[j]){
        ans[k++]=arr[i++];
        j++;
    }
    
    else
    ans[k++]=brr[j++];
   
   }
    while(i<n){
     ans[k++]=arr[i++];}

    while(j<m)
    ans[k++]=brr[j++];
     
    for(int i=0;i<k;i++)
     cout<<ans[i]<<" ";
   
     

}


int main()
{
    int n,m;
    cout<<"Enter the sizes:";
    cin>>n>>m;

    int arr[n],brr[m];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int j=0;j<m;j++)
    cin>>brr[j];

    int ans[n+m];

    unionArr(arr,brr,n,m,ans);

    
    //  
    return 0 ;
}
