#include<iostream>
using namespace std ;


int main()

{
   
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int ele;
   cin>>ele;
   
   int pos=0;
   
   for(int i=0;i<n;i++){
    if(arr[i]<ele)
        pos++;
    else
    break;
   }
   
// int j;

//  for(j=0;ele>arr[j];j++)
   
   for(int i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
        arr[pos]=ele;
        n++;
    
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}