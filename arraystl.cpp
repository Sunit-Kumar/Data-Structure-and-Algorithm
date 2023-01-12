#include<iostream>
#include<array>

using namespace std;

int main()
{
    array<int,4> arr1={1,2,3,4};
   array<int,4> arr2={5,7,8,6};
    
cout<<"Element of arr1: ";
    for(auto i:arr1){
        cout<<i<<" ";
    }
    cout<<endl;
   cout<<"The size of the array is"<<arr1.size()<<endl;
  cout<<"The first element is: "<<arr1.front()<<endl;
  cout<<"The last element is: "<<arr1.back()<<endl;
 cout<<"Is the array empty? "<<arr1.empty()<<endl;
 cout<<"Element at index 2: "<<arr1.at(2)<<endl;
 
cout<<"Element of arr2 ";
 for(int i:arr2){
 cout<<i<<" ";
}
cout<<endl;

// cout<<"The sort element of arr2 is ";
//sort(arr2.begin(),arr2.end());
//for(int i:arr2){
//cout<<i<<" ";}
//cout<<endl;

arr2.swap(arr1);
cout<<"Array 2 after swap: ";
for(int i: arr2){
cout<<i<<" ";}
cout<<endl;
cout<<"Array 1 after swap: ";
for(int i: arr1){
cout<<i<<" ";}
cout<<endl;
arr2.fill(1);
cout<<"Array 2 after filling 1: ";
for(int i: arr2){
cout<<i<<" ";}
    return 0;
}