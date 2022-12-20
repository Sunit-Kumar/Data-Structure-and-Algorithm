#include<iostream>
#include<array>
using namespace std;

void subsetsum(int arr[],int m){
int length=sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < length; i++)
    {   if(arr[i]==m){
        cout<<arr[i]<<endl;
        break;
    }
        
        for (int j = 0; j < length; j++)
        {   
            if (arr[i]+arr[j]==m)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
            
        }
        
    }
    
}

int main(){
    int arr[6]={7,12,14,19,13,5};
    int m=19;
    subsetsum(arr,m);
    return 0;

}