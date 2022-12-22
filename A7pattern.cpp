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
            a[j][i]=count;
            count++;
        }
        for(int k=row-1;k>=0;k--)
        {
            a[k][i+1]=count;
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
    Enter the number of row:6
        0       11      12      23      24      35
        
        1       10      13      22      25      34
        
        2       9       14      21      26      33
        
        3       8       15      20      27      32
        
        4       7       16      19      28      31
        
        5       6       17      18      29      30
*/