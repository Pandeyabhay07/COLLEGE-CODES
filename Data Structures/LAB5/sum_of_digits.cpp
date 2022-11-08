#include<iostream>
using namespace std ;
int sum_digits(int n){
    if (n==0)
    return 0;

    return(n%10 + sum_digits(n/10));
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int sum=sum_digits(n);
    cout<<"Sum of digits of "<<n<<" is:"<<sum<<endl;
    return 0 ;
}