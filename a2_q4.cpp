#include<iostream>
using namespace std;
int main()
{
    for(int row=1;row<=5;row++)
    {
        for(int s=1;s<=(row-1);s++)
           cout<<"  ";
        
        for(int col=1;col<=(5-(row-1));col++)
           cout<<"* ";
        cout<<endl;
    }
}
