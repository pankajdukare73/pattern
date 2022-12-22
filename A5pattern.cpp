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
            a[j][low]=count;
            count++;
        }

        for(int k=low+1;k<high;k++)
        {
            
            a[high-1][k]=count;
            count++;
        }
        for(int l=high-2;l>=low;l--)
        {
            a[l][high-1]=count;
            count++;
        }

        for(int m=high-2;m>low;m--)
        {
            a[low][m]=count;
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
       0       15      14      13      12
       
       1       16      23      22      11
       
       2       17      24      21      10
       
       3       18      19      20      9
       
       4       5       6       7       8
*/
