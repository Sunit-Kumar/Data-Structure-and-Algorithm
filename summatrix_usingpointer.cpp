#include<iostream>

using namespace std;

void rowsum(int arr[4][3]){
 int sum=0;
 cout<<"Row wise sum: "<<endl;
 for(int i=0;i<4;i++){
    sum=0;
    for (int j = 0; j < 3; j++)
    {
        sum+=*(*arr+i)+j;
    }
    cout<<i+1<<" "<<sum<<endl;
 }
}

void colsum(int arr[4][3]){
int sum=0;
  cout<<"Column wise sum: "<<endl;
 for(int j=0;j<3;j++){
    sum=0;
  
    for (int i = 0; i < 4; i++)
    {
        sum+=arr[i][j];
    }
    cout<<j+1<<" "<<sum<<endl;
 }
}

int main(){

  int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

colsum(arr);
rowsum(arr);

    return 0;
}