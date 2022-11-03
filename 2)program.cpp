#include<conio.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int r;
    vector <int>st;
    cout<<"Enter 5 elements "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>r;
        st.push_back(r);
    }
    vector <int>::iterator t;
    for(t=st.begin();t<st.end();t++)
    {
        cout<<*t<<" ";
    }
    getch();
    return 0;
}
