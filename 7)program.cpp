#include<conio.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int f,sum=0;
    vector <int>s;
    vector <int>::iterator g;
    cout<<"Enter 5 elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        s.push_back(f);
    }
    for(g=s.begin();g<s.end();g++)
    {
        sum=sum+*g;
    }
    cout<<"The sum of all elements "<<sum;
    getch();
    return 0;
}
