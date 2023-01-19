#include<iostream>
using namespace std;
int main()
{
    int low,high;
    cout<<"enter the lower range:"<<endl;
    cin>>low;
    cout<<"enter the higher range:"<<endl;
    cin>>high;
    int i=low;
    cout<<"All prime numbers are:"<<endl;
    for(i;i<=high;i++)
    {
        int p=2;
        bool flag=1;
        while(p<=i/2 && flag==1)
        {
            if (i%p!=0)
            { 
                flag=1;
                p++;
            }
            else
            {
               //cout<<"Not prime!"<<endl;
               flag=0;
               break;
            }
        }
        if (flag==1)
        cout<<i<<endl;
       
    }
    return 0;
}
