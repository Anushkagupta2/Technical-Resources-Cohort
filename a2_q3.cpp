#include<iostream>
using namespace std;
int main()
{
    for(int row=1;row<=5;row++)
    {
        for(int s=1;s<=(5-row);s++)
           cout<<"  ";
        
        for(int col=1;col<=row;col++)
           cout<<"*"<<" ";
        cout<<endl;
    }
}
