#include<iostream>
using namespace std;
int main()
{
    int count=0,row;
    cout<<"Enter the number of row:";
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<count<<"\t";
            count++;
        }
        cout<<"\n\n";
    }
    return 0;
}
/*
Author:PANKAJ BABAJI DUKARE
   Enter the number of row:5
     0       1       2       3       4
     
     5       6       7       8       9
     
     10      11      12      13      14
     
     15      16      17      18      19
     
     20      21      22      23      24
*/