#include<iostream>
using namespace std;
int main ()
{

    int x,y;
    cin>>x>>y;
    int ox=0,oy=0;
    if(x==0)
        cout<<"Total moves=\t"<<2*y<<endl;
    else if (y==0)
        cout<<"Total moves=\t"<<2*x<<endl;
        else
        {


    for(int i=0;i<x;i++)
     ox++;

    for(int j=0;j<y;j++)
     oy++;
     cout<<"Total moves=\t"<<ox+oy;
        }


     return 0;


}
