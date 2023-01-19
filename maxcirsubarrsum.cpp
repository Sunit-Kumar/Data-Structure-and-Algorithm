#include<iostream>
#include<algorithm>
using namespace std;

int kadanes(int arr[],int n){
    int maxsum=0,sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        maxsum=max(maxsum,sum);
    }
    return maxsum;
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

    int cirsum=0,linsum=0,totalsum=0;

    linsum=kadanes(arr,n);

    for (int i = 0; i < n; i++)
    {
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    //circular sum= sum of all elements - non inclusive elements
    //here circum=totalsum - (-kadens) 
    // because kadanes here is the element which is high sum of elements in negative value
    
    cirsum=totalsum+kadanes(arr,n);

    int result=max(cirsum,linsum);
    cout<<"The maximum sum is "<<result<<endl;
    return 0;
}