#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of row:";
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int k=0;k<i;k++)
        {
            cout<<"  ";
        }
        for(int j=0;j<row-i;j++)
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