#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

void symmDiff(int arr[],int brr[],int n,int m){
    int i=0,j=0;
    while(i<n and j<m){
        if(arr[i]<brr[j])
            cout<<arr[i++]<<" ";
            
        else if(arr[i]>brr[j])
            cout<<brr[j++]<<" ";
            
        else{
            i++;
            j++;
        } 
    }

    while(i<n)
    cout<<arr[i++]<<" ";

    while(j<m)
    cout<<brr[j++]<<" ";

}

int main()
{
    int n,m;
    cout<<"Enter the sizes:";
    cin>>n>>m;
    int arr[n],brr[m];
    int i,j;

    cout<<"Enter the set A:";
    for(i=0;i<n;i++)
    cin>>arr[i];
 
    cout<<"Enter the set B:";
    for( j=0;j<m;j++)
    cin>>brr[j];

    sort(arr,arr+n);
    sort(brr,brr+m);

    symmDiff(arr,brr,n,m);

    return 0 ;
}