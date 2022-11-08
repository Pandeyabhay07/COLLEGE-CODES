#include<iostream>
using namespace std ;
void tower(int n,char src,char des,char helper){
    if(n==0)
    return ;

    tower(n-1,src,helper,des);
    cout<<"Move from "<< src <<" to "<<des<<endl;
    tower(n-1,helper,des,src);
}
void toh(int n,char src,char med,char des){
    if(n>0){
        toh(n-1,src,des,med);
        cout<<"move from "<<src<<" to "<<des<<endl;
        toh(n-1,med,src,des);
    }
}
int main()
{
    int n;
    cout<<"Enter the numbers"<<endl;
    cin>>n;
    tower(n,'S','D','M');
    cout<<endl;
    toh(n,'S','M','D');
    return 0 ;
}