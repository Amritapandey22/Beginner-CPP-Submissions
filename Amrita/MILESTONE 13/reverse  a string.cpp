#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the string\n";
    cin.getline(str,100);
    string cstr=str;
    int l=cstr.length(),temp;
    for(int i=0;i<l/2;i++)
    {
      swap(str[i],str[l-i-1]);
    }
    cout<<"The reversed string is\n"<<str;

    return 0;
}
