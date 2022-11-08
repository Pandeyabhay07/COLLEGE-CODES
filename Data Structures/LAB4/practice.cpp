// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std ;

// void maxMin(int arr[],int n){
//     sort(arr,arr+n);
//     int sum1=0;
//     for(int i=0;i<n-1;i++)
//     sum1+=arr[i];
//     int sum2=0;
//     for(int i=1;i<n;i++)
//     sum2+=arr[i];
//     cout<<sum1<<" "<<sum2<<endl; 
// }
// int main()
// {
//     int n;cin>>n;
//     int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
//     maxMin(arr,n);
    
//     return 0 ;
// }
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main()

{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    double a=0,b=0,c=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0)
        a++;
        else if(arr[i]==0)
        b++;
        else
        c++;
    }
    a=a/n;
    b=b/n;
    c=c/n;

    cout<<setprecision(6)<<c<<endl;
    cout<<setprecision(6)<<a<<endl;
    cout<<setprecision(6)<<b<<endl;


    
    return 0 ;
}
