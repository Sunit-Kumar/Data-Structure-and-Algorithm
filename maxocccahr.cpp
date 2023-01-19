#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string str="jrfkrdjfsdfsrrhrn";

    int freq[26];

    for (int i = 0; i < 26; i++)
    {
        freq[i]=0;
    }
     
    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i]-'a']++;
    }
    
    int max=0;
    char ans;

    for (int i = 0; i < 26; i++)
    {
        if(freq[i]>=max){
            max=freq[i];
            ans=i+'a';
        }
    }
    
    cout<<"the maximum number of occurance is: "<<max;
    cout<<"\n the character most occured is: "<<ans;

    return 0;
}