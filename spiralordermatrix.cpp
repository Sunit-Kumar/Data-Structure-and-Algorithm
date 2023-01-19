#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    int rowstart=0,rowend=m-1,colstart=0,colend=n-1;

    while (rowstart<=rowend && colstart<=colend)
    {   //upper row
        for(int col=colstart; col<=colend; col++)
        cout<<arr[rowstart][col]<<" ";

        rowstart++;

        //last column
        for(int row=rowstart; row<=rowend; row++)
        cout<<arr[row][colend]<<" ";

        colend--;

        //lower row
        for(int col=colend; col>=colstart; col--)
        cout<<arr[rowend][col]<<" ";

        rowend--;

        //begining column
        for(int row=rowend; row>=rowstart; row--)
        cout<<arr[row][colstart]<<" ";

        colstart++;

    }

    cout<<endl;
    
    return 0;
}