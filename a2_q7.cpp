#include<iostream>
using namespace std;
int main()
{
    for(int row=1;row<=5;row++)
    {
        for(int s=1;s<=(row-1);s++)
            cout<<" ";
        cout<<"* ";
        cout<<endl;
    }
    return 0;
}

