#include<iostream>
#include<cmath>
using namespace std ;

bool isprime(int num){
     for(int i=2;i<=num/2;i++)
     {
        if(num%i==0)
        return false;
      
     }
     return true;
}

int main()
{
    int a,b;
    cout<<"Enter the range above 2 a and b:"<<endl;
    cin>>a>>b;
   for(int i=a;i<=b;i++)
   {
    if(isprime(i)){
        cout<<i<<" ";
    }
    }
    return 0 ;
}


// using loop
// int main(){
//     int a ,b;
//     cin>>a>>b;
//  int flag=0;
//     for(int i=a;i<=b;i++)
//  {
//         for(int j=2;j<=i;j++)
//         {
//             if(i%j==0)
//             {
//                     break;
//                     flag=1;
    
//              }
//         if (flag==0)
//         cout<<i<<" ";
            
//         }

//     }
//     return 0;

//  }