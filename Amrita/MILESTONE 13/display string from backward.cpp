#include<iostream>
#include<string>
using namespace std;
int main()
{
    char sr[100];


    cout<<"Enter the string\n";
    cin.get(sr,100);
       string str=sr;
    int i=str.length();
    cout<<"The reversed string is \n";

    for(sr[i]='\0';i>=0;i--)
    {
      if(sr[i]!='\0')
       cout<<sr[i];
    }
}
