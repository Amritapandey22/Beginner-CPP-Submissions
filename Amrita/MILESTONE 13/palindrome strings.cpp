
#include<iostream>
#include<string>
using namespace std;
int main()
{
    char sr[100];

    cout<<"Enter the string\n";
    cin.get(sr,100);
    string str=sr;
    int l=str.length();
    int i;
    for( i=0;i<l/2 && sr[i]==sr[l-i-1];i++);

    if (i==l/2)
      cout<<"String is a palindrome\n";
    else
      cout<<"Not a plaindrome\n";

    return 0;
}
