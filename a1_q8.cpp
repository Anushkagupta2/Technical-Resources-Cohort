#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long n,l;
    short k;
    cout<<("enter no:");
    cin>>n;
    cout<<("enter 2nd no:");
    cin>>k;
    int p=pow(10,k);
    int count=0;
    l=n;
    while(l>0)
    {
       //int r=n%10;
       count=count+1;
       l=l/10; 
    }
    int c=n%p;
    n=n/p;
    int s=pow(10,(count-k));
    int r=c*s+n;
    cout<<r<<endl;
    
    return 0;
}
