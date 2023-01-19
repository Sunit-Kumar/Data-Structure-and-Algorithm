#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    int check=1;
    for (int i = 0; i < n; i++) 
    {
        if(arr[i]!=arr[n-i-1]){
            check=0;
            break;
        }
        
    }

    if(check==0){
        cout<<arr<<"not a polindrome ";
    }
    else
     cout<<arr<<" is a polindrome  "<<endl;
    
    return 0;
}