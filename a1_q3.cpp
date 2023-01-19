#include <iostream>
using namespace std;
int main()
{
    int i,t;
    cout<<"enter count of nos to be tested:";
    cin >> t;
    for(i=1;i<=t;i++)
    {
        int n,p=2;
        bool flag=1;
        cout<<"enter no:";
        cin>>n;
        while(p<=n/2 && flag==1)
        {
            if (n%p!=0)
            { 
                flag=1;
                p++;
            }
            else
            {
               cout<<"Not prime!"<<endl;
               flag=0;
               break;
            }
        }
        if (flag==1)
        cout<<"prime!"<<endl;
    }
    return 0;
}
