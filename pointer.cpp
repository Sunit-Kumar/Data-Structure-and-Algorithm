#include <iostream>
using namespace std;

void show(int arr[],int *len){
    for (int i = 0; i < *len; i++)
    {
        cout<<*arr+i<<" ";
    }
    cout<<endl;
}

int main()
{
     int a=10;
     int *p=&a;
     cout<<"value of a "<<a<<endl;
     cout<<"address of a "<<&a<<endl;
     cout<<"address of a "<<p<<endl;
     cout<<"value of a "<<*p<<endl;
     cout<<"address of p "<<&p<<endl;
    
    int arr[]={1,3,5,9,4,3};
    int len=sizeof(arr)/sizeof(arr[0]);
    
     //calling the show function by refrence
     show(arr,&len);

    return 0;
}