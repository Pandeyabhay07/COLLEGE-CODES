#include<iostream>
using namespace std ;
int binarySearch(int arr[],int n,int key){
    int s=0;
    int l=n;
    
     while(s<=l){
        int mid=(s+l)/2;
        if(arr[mid]>key)
        l=mid-1;

        else if(arr[mid]<key)
        s=mid+1;

        else
        return mid;
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
    cout<<"Key is present at "<<binarySearch(arr,n,key)<<" index";

    return 0 ;
}