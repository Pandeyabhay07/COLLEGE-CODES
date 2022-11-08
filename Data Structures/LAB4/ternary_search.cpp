#include<iostream>
using namespace std ;
int ternary_search(int arr[],int n,int key){
    int start=0;
    int end=n;
    int mid1,mid2;
    while(start<=end){
        mid1=start+(end-start)/3;
        mid2=mid1+(end-start)/3;

        if(arr[mid1]==key)
        return mid1;

        else if (arr[mid2]==key)
        return mid2;

        else if (arr[mid1]>key)
        end=mid1-1;

        else if (arr[mid2]>key)
        {start=mid1+1;
         end=mid2-1;
        }
        else
        start=mid2+1;
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
    int ans=ternary_search(arr,n,key);
    if(ans==-1)
    cout<<"Element not found!!!"<<endl;
    else 
    cout<<"Element found at "<<ans+1<<" position.";
    
        
    
    return 0 ;
}