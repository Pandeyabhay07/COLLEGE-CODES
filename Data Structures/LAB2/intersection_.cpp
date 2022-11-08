#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

void intersection(int arr[],int brr[],int n,int m){
    int i=0,j=0;
    while(i<n and j<m){
        if(arr[i]<brr[j]){
            i++;
        }
        else if(arr[i]>brr[j]){
            j++;
        }
        else{
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
        
        
    }
}

// void intersection(int a[],int b[],int n,int m){
//     int ans[100];
//     int k=0;
//     int j;
//     for(int i=0;i<n;i++){
//         for( j=0;j<m;j++){
//             if(a[i]==b[j]){
                
//              if(a[i]!=ans[k]){
//                 ans[k]=a[i];
//                 k++;
//              }
                  
//         }
//             // if(j!=k){
//             // ans[k]=a[i];
//             // k++;
//         }      
//     }
//     for(int i=0;i<k;i++)
//     cout<<ans[i]<<" ";
// }
    
int main()
{
    int n,m;
    cin>>n>>m; 
    int arr[n];
    int brr[m];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<m;i++)
    cin>>brr[i];
    sort(arr,arr+n);
    sort(brr,brr+m);
    intersection(arr,brr,n,m);
    return 0 ;
}