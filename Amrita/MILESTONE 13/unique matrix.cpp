#include<iostream>
using namespace std;
int main()
{
    int n,m,t,count=0;
    bool istrue=true;
    cin>>t>>n>>m;
    int arr[n][m];
    while (t!=0)
    {
        for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        cin>>arr[i][j];
    }
    for(int i=0;i<n;i++)
    {
        count=0;
      for(int j=0;j<m;j++)
        {
            if(arr[i][j]==arr[i+1][j])
             count++;
        }

        if(count==m)
          {
              istrue=false;
              break;
          }
    }
    if(istrue)
    cout<<"YES\n";
    else
    {cout<<"NO\n";}
    t--;
    }
    return 0;

}
