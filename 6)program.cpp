#include<conio.h>
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int f;
    vector <int>s;
    vector <int>::iterator g;
    cout<<"Enter 5 elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        s.push_back(f);
    }
    reverse(s.begin(),s.end());
    g=s.begin();
    for(;g<s.end();g++)
    {
        cout<<*g<<" ";
    }
    getch();
    return 0;

}
