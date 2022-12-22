#include<iostream>
using namespace std;
int main()
{
    int count=0,row,b;
    cout<<"Enter the number of row:";
    cin>>row;
    int a[row][row];
    for(int i=0;i<row;)
    {
        for(int j=0;j<row;j++)
        {
            a[i][j]=count;
            count++;
        }

        for(int k=row-1;k>-1;k--)
        {
            a[i+1][k]=count;
            count++;
        }
        i=i+2;
    }

    //print
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n\n";
    }
    return 0;
}

/*
Author:PANKAJ BABAJI DUKARE
   Enter the number of row:5
      0       1       2       3       4
      
      9       8       7       6       5
      
      10      11      12      13      14
      
      19      18      17      16      15
      
      20      21      22      23      24
*/