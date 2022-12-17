#include <iostream>

using namespace std;
 
int max(int arr[],int num){
    int max= arr[0];
 for (int i = 0; i < num; i++)
 {
    if(arr[i]>max){
        max=arr[i];
    }
 }
    return max;
}

int countsort(int arr, int num){

}

 int main(){
    cout<<"Enter the number of elements you want to enter: ";
    int num;
    cin>>num;
    int arr[num];
    cout<<"Enter the elements :";
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    countsort(arr,num);
    return 0;
 }