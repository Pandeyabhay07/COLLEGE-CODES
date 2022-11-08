// #include<iostream>
// using namespace std ;

// int main()

// {
//      int n;
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         int space=n-i;
//         int count=i;
//         for(int i=0;i<space;i++)
//         cout<<" ";

//     for(int j=1;j<=i;j++){
//         cout<<count;
//         count++;
//     }
  
//     for(int k=2;k<=i;k++){
//         cout<<count-2;
//         count--;
//     }
//     cout<<endl;
//     }
//     return 0 ;
// }
#include<iostream>
using namespace std ;

int main()

{
    int n;;
    cin>>n;
    for(int i=1;i<=n;i++){
        int count=i;
        for(int j=i;i<=n;i++)
        cout<<" ";
        for(int k=1;k<=i;k++)
        {cout<<count;
        count++;}
        cout<<endl;
       
    }
    return 0 ;
}