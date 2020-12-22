#include<iostream>
using namespace std;
int main()
{
    char str1[100],str2[100];
    int l;
    cout<<"Enter the first string\n";
    cin.getline(str1,100);
    cout<<"Enter the second string\n";
    cin.getline(str2,100);
    int ll=0;
    for( l=0;str1[l]!='\0';l++)
        ll++;
    for(int i=0;str2[i]!='\0';i++)
        str1[ll++]=str2[i];

    cout<<"\nThe cocatenated string is "<<str1;
    return 0;
}
