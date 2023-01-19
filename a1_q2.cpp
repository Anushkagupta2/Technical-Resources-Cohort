#include<iostream>
using namespace std;
int main()
{
    int no;
    char choice;
    bool flag=true;
    while(flag)
    {
    cout<<"enter marks of the student:"<<endl;
    cin>>no;
    if (no>90)
    cout<<"excellent!"<<endl;
    else if (no>80 && no<=90)
    cout<<"good!"<<endl;
    else if (no>70 && no<=80)
    cout<<"fair!"<<endl;
    else if (no>60 && no<=70)
    cout<<"meets expectations!"<<endl;
    else
    cout<<"below par!"<<endl;
    cout<<"want to continue(y/n):";
    cin>>choice;
    if (choice=='y' || choice=='Y')
    flag=true;
    else
    {
        flag=false;
        break;
    }
    }
    return 0;
}
