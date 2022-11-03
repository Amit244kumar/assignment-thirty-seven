#include<iostream>
#include<conio.h>
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
    cout<<"The greater element is "<<*max_element(s.begin(),s.end())<<endl;
    cout<<"The smaller element is "<<*min_element(s.begin(),s.end());
    getch();
    return 0;
}
