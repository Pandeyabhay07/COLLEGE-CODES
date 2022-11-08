#include<iostream>
using namespace std ;

int reverse(int n){
    int rem,rev=0;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}



// int main()

// {
//     int num;
//     cout<<"Enter the number";
//     cin>>num;
//     int rem,rev=0;
//     while(num>0){
//         rem=num%10;
//         rev=rev*10+rem;
//         num=num/10;
//     }
//     cout<<rev;

//     return 0 ;
// }


// using function
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    cout<<reverse(num);

}