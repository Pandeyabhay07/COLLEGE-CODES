#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main()

{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++)
        swap(arr[i][j],arr[j][i]);
    }

     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
            cout<<endl;
    }
    
    return 0 ;
}