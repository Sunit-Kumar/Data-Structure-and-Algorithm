#include <bits/stdc++.h>
using namespace std;

int main(){
   char str[20] = "Cpp Programing";
   int i=0,j=0,k=0;
  for (i = 0; str[i]!='\0'; i++);
  cout<<i<<endl;
////////////////////////////////////////////////////////////////////////////////////
//   char str2[20]=" is being taught.";

//   while (str[k]!='\0')
//   { 
//     k++;
//   }
//   while (str2[j]!='\0')
//   {
//     str[k]=str2[j];
//     k++;
//     j++;
//   }
//   str[k]='\0';

//   cout<<str<<endl;
// ////////////////////////////////////////////////////////////////////////////////////
//   int n=8;
//   while (str[k]!='\0')
//   { 
//     k++;
//   }
//   while (str2[j]!='\0' && n--)
//   {
//     str[k]=str2[j];
//     k++;
//     j++;
   
//   }

//   str[k]='\0';
//   cout<<str<<endl;
//   ///////////////////////////////////////////////copy///////////////////////////////
// k=0;
// char s3[20];
//   while (str[k]!='\0')
//   { s3[k]=str[k];
//     k++;
//   }
//   s3[k]='\0';
//   cout<<s3<<endl;
//   ///////////////////////////////////////////reverse////////////////////////////////

//   int temp=0,temp2=0;
//   char s4[20];
//   while (str[temp2]!='\0')
//   { 
//     temp2++;
//   }
//   while(temp2--)
//   {
//     s4[temp]=str[temp2];
//     temp++;
//   }
// s4[temp]='\0';
//   cout<<s4<<endl;
//   ///////////////////////////////////sort////////////////////////////////////////////
//   temp=0,temp2=0;

//   while (str[temp2]!='\0')
//   { 
//     temp2++;
//   }
//   for (int z = 0; z < temp2-1; z++)
//   {
// for (int s = z+1; s < temp2; s++)
//     {
//        if (str[z]>str[s])
//        {
//          temp = str[z];
//          str[z]=str[s];
//          str[s]=temp;
//        }
       
//     }
//     cout<<str<<endl;
//   }
//   cout<<str<<endl;

  //////////////////////////////sorting-dictioary////////////////////////////////


//   int limit;
//   cout<<"Enter number of names you want to enter: ";
//   cin>>limit;
// string names[limit];
// cout<<"Enter the names: ";
//   for (int i = 0; i < limit; ++i)
//   {
//     getline(cin,names[i]);
    
//   }
//   string temp;
//   int temp2=limit;
//   for (int z = 0; z < temp2; z++)
//   {
//   for (int s = 0; s < temp2-1; s++)
//     {
//        if(names[s]>names[s+1])
//        {
//          temp = names[s];
//          names[s]=names[s+1];
//          names[s+1]=temp;
//        }
       
//     }
//     //cout<<names<<endl;
//   }
//   cout<<"Sorted names are: "<<endl;
//   for (int i = 0; i < limit; i++)
//   {
//     cout<<names[i]<<endl;
    
//   }



    return 0;
}