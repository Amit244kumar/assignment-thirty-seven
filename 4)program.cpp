#include<conio.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int f;
    vector <int>v1;
    vector <int>v2;
    vector <int>::iterator t;
    cout<<"Enter 5 elements";
    for(int i=0;i<5;i++)
    {
        cin>>f;
        v1.push_back(f);
    }
    cout<<"The elements are entered"<<endl;
    v2=v1;
    for(t=v2.begin();t<v2.end();t++)
        cout<<*t<<" ";
    cout<<endl<<"The vector elements copy";
    getch();
    return 0;
}
