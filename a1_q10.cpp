#include<iostream>
using namespace std;
int main()
{
    int n,i=2;
    cout<<"enter no:";
    cin>>n;
    for(i;i<=n;i++)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }

    }
    return 0;
}
