#include<iostream>
using namespace std ;

void unique(int arr[],int n){
    int count=1,i,j;
    for( i=0;i<n;i++){
        for( j=0;j<n;j++)
        {
            if(arr[i]==arr[j]&& i!=j)
            break;
        }
            if(j==n)
            {cout<<"Unique element "<<count<<" is:"<<arr[i]<<endl;
            count++;
             }
        }
        
    }
    

int main()

{
    int n;
    cout<<"Enter size:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unique(arr,n);
    return 0 ;
}