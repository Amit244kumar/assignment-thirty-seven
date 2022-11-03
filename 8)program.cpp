#include<conio.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int f,sum=0;
    vector <int>v1;
    vector <int>v2;
    vector <int>v3;
    vector <int>::iterator g1,g2;
    cout<<"Enter 5 elements in first vector"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        v1.push_back(f);
    }
    cout<<"Enter 5 elements in second vector"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        v2.push_back(f);
    }
    for(g1=v1.begin(),g2=v2.begin();g1<v1.end();g1++,g2++)
    {
        if(*g1==*g2)
        {
            v3.push_back(*g1);
        }
    }
    g1=v3.begin();
    cout<<"The common elements of both vector "<<endl;
    for(;g1<v3.end();g1++)
    {
        cout<<*g1<<" ";
    }
}
