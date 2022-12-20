#include<iostream>

using namespace std;
int cyclicrot(int *arr){
int temp1=0,temp2=0,i;
temp2=arr[0];
for (i = 0; i < 10; i++)
{   
    temp1=arr[i+1];
    arr[i+1]=temp2;
    temp2=temp1;
}
// arr[0]=arr[i];
// int x=arr[n-1];
// for(int i=n-1;i>0;i--){
//     arr[i]=arr[i-1];
// }
// arr[0]=x;
for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return *arr;
}

int main(){

int arr[10]={1,2,3,4,5,6,7,8,9,10};

cyclicrot(arr);

    return 0;
}