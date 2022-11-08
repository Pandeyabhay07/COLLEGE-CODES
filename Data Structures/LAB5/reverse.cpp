#include<iostream>
using namespace std ;
int s=5;
int reverse(int n,int rev){
    if(n==0)
    return rev;
 
    else 
    {
        rev=rev*10 + n%10;
        return reverse(n/10,rev);
    }
    s=10;
    cout<<s;

}
int main()
{
    int n;
    cin>>n;
    int ans=reverse(n,0);
    cout<<ans<<endl;
    return 0 ;
}