#include<iostream>
using namespace std;
int main()
{
    int n,c;
    cout<<"enter a number:"<<endl;
    cin>>n;
    while(n>0)
    {
        c=n%10;
        n=n/10;
        cout<<c<<endl;
    }
    return 0;
}
