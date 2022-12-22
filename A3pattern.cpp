#include<iostream>
using namespace std;
int main()
{
    int count=0,row,b,low=0,high;
    cout<<"Enter the number of row:";
    cin>>row;

    int a[row][row];
    high=row;
    b=((row+1)/2);

    for(int i=0;i<b;i++)
    {
        for(int j=low;j<high;j++)
        {
            a[low][j]=count;
            count++;
        }

        for(int k=low+1;k<high;k++)
        {
            a[k][high-1]=count;
            count++;
        }

        for(int l=high-2;l>=low;l--)
        {
            a[high-1][l]=count;
            count++;
        }

        for(int m=high-2;m>low;m--)
        {
            a[m][low]=count;
            count++;
        }
        
        low=low+1;
        high=high-1;
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
       
       15      16      17      18      5
       
       14      23      24      19      6
       
       13      22      21      20      7
       
       12      11      10      9       8
*/