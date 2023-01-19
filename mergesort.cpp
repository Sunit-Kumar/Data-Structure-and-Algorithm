#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> mer,int mbegin,int mid,int mend){
int i=mbegin,j=mend,k=mbegin;
vector<int> temp;
while (i<=mid && j<=mend)
{
    if(mer[i]<mer[j]){
      temp[k]=mer[i];
      i++;
    }
    else{
        temp[k]=mer[j];
        j++;
    }
    k++;
}

if(i>mid){
    while(j<=mend){
    temp[k]=mer[j];
    j++; k++;
    }
}
else{
    while (i<=mid)
    {
        temp[k]=mer[i];
    }
    i++; k++;
}
mer=temp;
}

void mergesort(vector<int> mer,int mbegin,int mend){

   if(mbegin<mend){
    int mid=mbegin+(mend-mbegin)/2;
    mergesort(mer,mbegin,mid);
    mergesort(mer,mid+1,mend);
    merge(mer,mbegin,mid,mend);
   }
}

int main()
{
    vector<int> marvel;
    marvel.push_back(4);
    marvel.push_back(7);
    marvel.push_back(55);
    marvel.push_back(10);
    marvel.push_back(23);
    marvel.push_back(12);
    marvel.push_back(44);

    cout<<"The list is: ";
    for(auto i: marvel){
        cout<<i<<" ";
    }
    cout<<endl;



    return 0;
}