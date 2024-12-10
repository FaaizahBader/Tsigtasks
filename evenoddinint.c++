#include <iostream>
using namespace std;
int main(){
    int n,i,e=0,o=0;
    cout<<"enter number";
    cin>>n;
    while(n>0)
    {
        i=n%10;
        if(i%2==0)
        {
            e++
        }
        else{
            o++
        }
        n=n/10
    }
    cout<<"number of even numbers are "<<e<<"number of odd numbers are "<<o<<endl;

}
