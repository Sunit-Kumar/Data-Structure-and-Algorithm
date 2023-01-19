#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s = "jfjadfiehknfnd";
    char first1='a';
    char first2='A';

    cout<<"the ascii value of a is"<<int(first1)<<endl;
    cout<<"The ascii value of A is "<<int(first2)<<endl; 

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
    }
    //transform(s.begin(),s.end(),s.begin(),::toupper);
    //inbuild function to convert the case to upper 
    cout<<"To upper case: ";
    cout<<s<<endl;

    
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
    }
    //transform(s.begin(),s.end(),s.begin(),::tolower);
    //in built funciton to convert the case in string
    cout<<"To lower case: ";
    cout<<s<<endl;

    string str="53424";
    sort(str.begin(),str.end(),greater<int>());
     //greater<int>() is used to start the sort form bigger to smaller number

    int x=stoi(str);
   cout<<"The biggest numbe that can be formed is: "<<x;
    return 0;
}