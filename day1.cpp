#include<iostream>

using namespace std;

void print(int arr[]){
int *ptr=arr;
for (int i = 0; i < 10; i++)
{
    cout<<(*ptr+i)<<" ";
}
cout<<endl;
}

int main(){
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
    print(arr);
    return 0;
}