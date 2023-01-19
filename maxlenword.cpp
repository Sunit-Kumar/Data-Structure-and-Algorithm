#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();  //to clear buffer

//i am the king
    int currlen=0,maxlen=0,i=0,first=0,last=0;
    while (1)
    {
        if(arr[i]==' ' || arr[i]=='\0'){

            if(currlen>maxlen){
                maxlen=currlen;
                last=first;
            }
            currlen=0;
            first=i+1;
        }
        else
         currlen++;
      
      if(arr[i]=='\0'){
        break;
      }
      i++;
    }
    cout<<"max length is "<<maxlen+1<<endl;
    cout<<"the word is ";
    
    for(int j=0; j<maxlen+1; j++){
        cout<<arr[j+last];
    }
    cout<<endl;
    return 0;
}