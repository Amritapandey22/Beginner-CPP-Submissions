#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<s.size();i++)
    {
        if(arr[s[i]-'a']==0)
        {
           arr[s[i]-'a']++;
           cout<<s[i];
        }
    }

    return 0;
}
