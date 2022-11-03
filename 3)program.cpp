#include<conio.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int r;
    vector <int>s;
    cout<<"Enter 5 elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>r;
        s.insert(s.begin(),r);
    }
    vector <int>::iterator d;
    for(d=s.begin();d<s.end();d++)
    {
        cout<<*d<<" ";
    }
    getch();
    return 0;
}
