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
    int tosearch;
    cout<<"Enter the element to search: ";
    cin>>tosearch;

    int i=0,j=n-1,start=arr[i][j];
    while ( i<m && j>=0)
    {
        if(arr[i][j]==tosearch){
            cout<<"found at "<<i+1<<" "<<j+1;
            return 0;
        }
        else if(arr[i][j]<tosearch)
        i++;
        else
        j--;
    }
    
    cout<<"element no found!!";
    return 0;
}