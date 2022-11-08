#include<iostream>
using namespace std ;

int sum_arr(int arr[],int n)
{
        int sum;
        int d=arr[1]-arr[0];
        int a=arr[0];
        sum=(n*((2*a)+(n-1)*d))/2;
    
    return sum;
}

int main()
{
    int n;
    cout<<"Enter size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int x=sum_arr(arr,n+1);

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    int miss=x-sum;
    cout<<miss<<" ";
    return 0 ;
}