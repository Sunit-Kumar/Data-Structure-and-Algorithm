//this can go for O(n2) or O(n3)
//else we can use kadane's algoithm for O(n) approach

#include<iostream>
#include<algorithm>
using namespace std;

int sumsub(int arr[],int n){
    int sum=0,maxsum=0;
    for (int i = 0; i < n; i++)
    {
        sum=0;
        for (int j = i; j < n; j++)
        {   
            sum+=arr[j];
            cout<<"sum= "<<sum<<endl;
            maxsum=max(maxsum,sum);
        }
    }
    return maxsum;
}

int main()
{   cout<<"Enter the number of elements to enter: ";
     int n;
     cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

   cout<<"The max sum of all the subarray is:"<<sumsub(arr,n);
    
    return 0;
}