#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of middle star:";
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=row-i;j>0;j--)
        {
            cout<<" ";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<i+2;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<row-1-i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}

/*
Author:PANKAJ BABAJI DUKARE
    Enter the number of middle star:5
           * 
          * *
         * * *
        * * * *
       * * * * *
        * * * *
         * * *
          * *
           *
*/