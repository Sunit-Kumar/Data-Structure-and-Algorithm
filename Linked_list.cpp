#include<iostream>
using namespace std;

struct Linked_list
{
    int data;
    Linked_list *ptr;
}*start,*end,*ptr;



int main(){
   int num,idata;
   start=NULL;
   while (1)
   {
    cout<<"Enter your choice: ";
    cout<<"1.Insert_at_Beg \n 2.Insert at end \n 3.Exit\n ";
    cin>>num;
    switch (num)
    {
    case 1: cout<<"Enter the data to insert: ";
            cin>>idata;
            AtBeg(start);
        break;
    case 2: cout<<"Enter the data to insert: ";
            cin>>idata;
            AtEnd(start);
        break;
    case 3: exit(1);
        break;
    default: cout<<"Invalid input!!";
        break;
    }
    
   }
   
    return 0;
}