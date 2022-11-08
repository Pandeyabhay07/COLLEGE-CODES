#include<iostream>
using namespace std ;
int reverse(int n,int rev){
    if(n==0)
    return rev;
    
    else
    {
        rev = rev*10 + n%10;
        return reverse(n/10,rev);
    }
}
int main()
{
    int n;
    cin>>n;
    int temp=reverse(n,0);
    if(temp==n)
    cout<<"Palindrome"<<endl;
    else
    cout<<"Not palindrome"<<endl;
    return 0 ;
}