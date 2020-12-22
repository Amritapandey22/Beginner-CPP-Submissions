#include<iostream>
using namespace std;
int main()
{
    char str[100];
    int words=0;
    cout<<"Enter the string\n";
    cin.get(str,100);
    for(int i=0;str[i]!='\0';i++)
    {
        if (str[i]==' ')
            words++;
    }
    cout<<"The number of words in the string are \n"<<words+1;
    return 0;
}
