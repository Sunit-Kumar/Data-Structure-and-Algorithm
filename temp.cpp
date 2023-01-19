#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"Enter the number of elements to enter: ";
     int n;
     cin>>n;
    int arr[n+1];
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int N=1e6+2, ans=-1;
    int check[N];

    for (int i = 0; i < N; i++)
    {
        check[i]=false;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=0){
            check[arr[i]]=true;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (check[i]==false)
        {   ans=i+1;
            cout<<ans;
            return 0; 
        }
        
    }
    
    if(ans==-1){
        cout<<"could not find the answer";
    }
    
    return 0;
}