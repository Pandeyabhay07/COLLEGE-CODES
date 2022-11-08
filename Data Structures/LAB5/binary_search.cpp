#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int binarySearch(int arr[],int l,int e,int key)
{
    if(l<=e)
    {
        int mid=(l+e)/2;

        if(arr[mid]==key)
        return mid;

        if(arr[mid]>key)
        return binarySearch(arr,l,mid-1,key);

        if(arr[mid]<key)
        return binarySearch(arr,mid+1,e,key);

    }
        return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int key;
    cin>>key;

    sort(arr,arr+n);
    int result=binarySearch(arr,0,n-1,key);

    if(result==-1)
    cout<<"Element is not present in array.";
    else         
    cout<<"Element is present at index "<<result<<endl;
   
    return 0 ;
}