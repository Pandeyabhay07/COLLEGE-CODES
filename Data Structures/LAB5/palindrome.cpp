#include<iostream>
using namespace std ;
int reverse(int n,int rev){
    if(n==0)
    return rev;

    else 
    {
        rev=rev*10 + n%10;
        return reverse(n/10,rev);
    }

}
int main()
{
    int n;
    cin>>n;
    int ans=reverse(n,0);
    if(ans==n)
    cout<<"Palindrome Number."<<endl;
    else
    cout<<"Not Palindrome"<<endl;
    return 0 ;
}