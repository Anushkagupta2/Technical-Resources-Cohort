#include<iostream>
using namespace std;
int main()
{
    int n,a=1;
    cout<<"enter no";
    cin>>n;
    
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<a<<" ";
            a=a+1;
        }
        cout<<endl;
    }
}
