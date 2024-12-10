#include <iostream>
using namespace std;
int main()
{
    int n,s=0,i;
    cout<<"enter number";
    cin>>n;
    while(n>0)
    {
        i=n%10;
        s=s+i;
        n=n/10;
    }
    cout<<"sum of digits is"<<s;
}