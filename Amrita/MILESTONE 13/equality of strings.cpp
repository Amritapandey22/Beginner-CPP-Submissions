#include<iostream>
using namespace std;
int main()
{
    char str1[100],str2[100];
    int flag=1;
    cout<<"Enter the first string\n";
    cin.getline(str1,100);
    cout<<"Enter the second string\n";
    cin.getline(str2,100);
    for(int i=0;str1[i]!='\0';i++)
    {
        if (str1[i]!=str2[i])
        {
           flag=0;
           break;
        }
    }
    if (flag==0)
        cout<<"Strings are not equal\n";
    else
        cout<<"Strings are  equal\n";
    return 0;

}
