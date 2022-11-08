#include<iostream>
using namespace std ;

int main()

{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key,flag=0;
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        cout<<"Element "<<key<<" is present at "<<i+1<<" position."<<endl;
        flag=1;
       
    }
    if(flag==0)
    cout<<"Element not found!!!"<<endl;
    

   
    return 0 ;
}