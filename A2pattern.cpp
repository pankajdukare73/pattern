#include<iostream>
using namespace std;
int main()
{
    int count=0,row;
    cout<<"Enter the number of row:";
    cin>>row;
    int a[row][row];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            a[j][i]=count;
            count++;
        }
    }
    //print pattern
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
      0       5       10      15      20
      
      1       6       11      16      21
      
      2       7       12      17      22
      
      3       8       13      18      23
      
      4       9       14      19      24
*/