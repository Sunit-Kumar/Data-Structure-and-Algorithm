#include<iostream>
#include<algorithm>
using namespace std;

int longarith(int arr[],int n){
    int pd=arr[1]-arr[0];
    int curr=2;
    int ans=2;
    int j=2;
    while (j<n)
    {  
        if(pd==arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    return ans;
}

int main()
{
    cout<<"Enter the number of elements to enter: ";
     int n;
     cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The  length of max sub array: ";
    cout<<longarith(arr,n)<<endl;
    return 0;
}