#include<conio.h>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    float f;
    vector <float>v1;
    vector <float>::iterator t1;
    cout<<"Enter 5 float elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        v1.push_back(f);
    }
    cout<<"The elements are"<<endl;
    for(t1=v1.begin();t1<v1.end();t1++)
    {
        cout<<*t1<<" ";

    }
    getch();
    return 1;
}
