#include<conio.h>
#include<iostream>
using namespace std;

#include<vector>

int main()
{
    vector <int>ar={1,2,3,4,5,6,5};
    vector <int>::iterator d;
    d=ar.begin();
    for(d=ar.begin();d<ar.end();d++)
    {
        cout<<*d<<" ";
    }
    getch();
    return 0;
}
