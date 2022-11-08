#include<iostream>
using namespace std ;
int index_search(int arr[],int n,int key){
    int m=0,start,end,flag=0;
    int index[n/3],indexEle[n/3];

    for(int i=0;i<n;i+3){
        indexEle[m]=arr[i];
        index[m]=i;
        m++;
    }

    if(key<indexEle[0])
        return -1;
    
    else{
        for(int i=1;i<m;i++){
            if(key<indexEle[i]){
                start=index[i=1];
                end=index[i];
                flag=1;
                break;
            }

            if(flag==0){
                start=index[i-1];
                end=n-1;
            }
        }
    }

    for(int i=start;i<end;i++){
        if(arr[i]==key)
        return i;  
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
    int ans=index_search(arr,n,key);
    if(ans==-1)
    cout<<"Element not found!!";
    else
    cout<<"Element is present at "<< ans+1<<" position!!"<<endl;
    return 0 ;
}