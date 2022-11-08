#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int MEAN(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum/n;
}

int MEDIAN(int arr[],int n){
    sort(arr,arr+n);
    if(n%2==0){
        return (arr[n/2]+arr[(n/2)+1])/2;
    }
    else
    return arr[(n+1)/2];

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int mean=MEAN(arr,n);
    int meadian=MEDIAN(arr,n);

    cout<<"Mean is"<<mean<<endl;
    cout<<"Meadian is"<<meadian<<endl;
    
    return 0 ;
}