#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of row:";
    cin>>row;
    for(int i=row;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}

/*
Author:PANKAJ BABAJI DUKARE
   Enter the number of row:5
     * * * * * 
     * * * * 
     * * * 
     * * 
     * 
*/