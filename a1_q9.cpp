#include<iostream>
using namespace std;
int main()
{
    int n,p,i=1;
    cout<<"enter 1st no:";
    cin>>n;
    cout<<"enter 2nd no:";
    cin>>p;
    int s;
    while(i<=n)
    {
        if (n%i==0 && p%i==0)
        {
            s=i;
            i++;
        }
        else
            i++;
    }
    cout<<"GCD is:"<<s<<endl;
    int k;
    for(i=1;;i++)
    {
        k=n*i;
        if (k%p==0)
        { 
            cout<<"LCM is:"<<k<<endl;
            break;
        }
    }
    return 0;
}
