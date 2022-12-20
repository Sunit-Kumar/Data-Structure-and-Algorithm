#include<iostream>
using namespace std;

int main()
{
    int i=0,beg,end,mid,n,search;
    cout<<"Enter the number of data to enter : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the data in ascending order: ";
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    cout<<"Enter the number to search : ";
    cin>>search;
    beg=0;
    end=n-1;
    while(beg<=end){
        mid=(beg+end)/2;

        if(arr[mid]==search){
            cout<<"Number "<< search<<" is found at index "<<mid+1<<endl;
             i=1;
             break;
        }
        else if(arr[mid]<search){
               beg=mid+1;
        }
        else{
                  end=mid-1;
        }
    }
    if (i==0)
    {
        cout<<"Search element not found "<<endl;
    }

    return 0;
}
