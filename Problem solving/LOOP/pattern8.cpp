// #include<iostream>
// using namespace std ;

// int main()

// {
//      int n;
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         int space=n-i;
        
//         for(int i=0;i<space;i++)
//         cout<<" ";

//     for(int j=1;j<=i;j++){
//         cout<<"*";
       
//     }
   
//     for(int k=2;k<=i;k++){
//         cout<<"*";
       
//     }
//     cout<<endl;
//     }
//     return 0 ;
// }

#include<iostream>
using namespace std ;

int main()

{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        cout<<"*";
        for(int m=1;m<i;m++)
        cout<<"*";
        cout<<endl;
    }

    return 0 ;
}