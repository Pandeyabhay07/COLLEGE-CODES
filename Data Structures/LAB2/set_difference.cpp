#include<iostream>
using namespace std ;

void AminusB(int arr[],int brr[],int n,int m){
    int k=0;
    int ans[100];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr[i]==brr[j])
            break;
        }
            if(j==m)
            {
            ans[k]=arr[i];
            k++;
            }
            
    }
    
    for(int i=0;i<k;i++)
    cout<<ans[i]<<" ";
    
    }

void BminusA(int arr[],int brr[],int n,int m){
    int k=0;
    int ans[100];
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(brr[i]==arr[j])
            break;
        }
        if(j==n){
                ans[k++]=brr[i];
            }
    }
    for(int i=0;i<k;i++)
    cout<<ans[i]<<" ";
}

int main()
{   int n,m;
    cout<<"Enter the sizes:";
    cin>>n>>m;
    int arr[n],brr[m];
    int i,j;
    cout<<"Enter the set A:";
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the set B:";
    for( j=0;j<m;j++)
    cin>>brr[j];

    i=0;
    j=0;
     
    int c;
    cout<<"Enter the choice-"<<endl<<"1 for A-B"<<endl<<"2 for B-A"<<endl;
    cin>>c;

    if(c==1)
    AminusB(arr,brr,n,m);

    if(c==2)
    BminusA(arr,brr,n,m);
    return 0 ;
}