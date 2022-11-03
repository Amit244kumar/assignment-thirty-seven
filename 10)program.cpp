#include<conio.h>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int c=0;
    vector <int>v1={3,6,4,7,8,5};
    int f;
    cout<<"Enter number to search in vector : ";
    cin>>f;
    for(int i=0;i<v1.size();i++)
    {
        if(f==v1[i])
            c++;
    }
    cout<<"The element "<<f<<" in vector is "<<c<<" time";
    getch();
    return 0;
}
