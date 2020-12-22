#include<iostream>
using namespace std;
int main()
{
    char str[100];
    int count=0;
    cout<<"Enter the string\n";
    cin.get(str,100);
    for(int i=0;str[i]!='\0';i++)
    {
     if (str[i]!=' ')
        count++;
    }

     cout<<"\nThe length of string is "<<count;
     return 0;
}
