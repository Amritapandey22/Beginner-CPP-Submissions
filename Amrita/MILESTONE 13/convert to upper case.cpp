
#include<iostream>
using namespace std;
int main()
{
  char sr[100];
  cout<<"ENTER THE STRING\n";
  cin.get(sr,100);
  for(int i=0;sr[i]!='\0';i++)
  {
      sr[i]=(sr[i] >= 'a' && sr[i] <= 'z') ? (sr[i] - 32) : sr[i];
  }
  cout<<"THE UPPERCASE CONVERSION ARE\n"<<sr;

}
