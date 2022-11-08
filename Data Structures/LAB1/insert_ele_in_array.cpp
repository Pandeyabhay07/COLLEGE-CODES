#include<iostream>
using namespace std ;

int main()

{
    int arr[100];
    int n;
    cout<<"enter the size of array"<<endl;
     cin>>n;
    cout<<"Enter "<<n<<"Elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int posi;
    cout<<"position:"<<endl;
    cin>>posi;
    int ele;
    cout<<"Enter element"<<endl;
    cin>>ele;
    for(int i=n;i>=posi;i--)
    {
        arr[i]=arr[i-1];
    }
        arr[posi-1]=ele;
        n++;
    
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0 ;
}