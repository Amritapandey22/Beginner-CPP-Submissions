#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    while(t!=0)
    {
        cin>>s;
        reverse(s.begin(),s.end());
        cout<<s<<endl;
        t--;
    }
    return 0;
}
