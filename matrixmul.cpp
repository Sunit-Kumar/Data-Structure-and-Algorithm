#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    int arr1[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cin>>arr1[i][j];
        }
    }

    int a,b;
    cin>>a>>b;

    int arr2[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j<b; j++)
        {
            cin>>arr2[i][j];
        }
    }

    if(n!=a){
        cout<<"matrix can't be multiplied ";
        return 0;
    }
    //multiplication
    int arr[m][b];
    for (int i = 0; i < m; i++)
    {  
        for (int j = 0; j < b; j++)
        {  
            for(int k=0; k<n ;k++){ 
              arr[i][j]+=arr1[i][k]*arr2[k][j];
            }
            
        }
        
    }
    //print the multiplied matrix
    for (int i = 0; i < m; i++)
    {
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}