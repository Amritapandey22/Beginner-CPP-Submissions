#include <bits/stdc++.h>

#define pb push_back




using namespace std;




int main()

{

int n;

cin>>n;

string s;

vector<string> v, vrev;




for(int i=0; i<n; i++)

{

cin>>s;

v.pb(s);

reverse(s.begin(), s.end());

vrev.pb(s);

}

for(int i=0; i<n; i++)

if(find(vrev.begin(), vrev.end(), v[i]) != vrev.end())

{

cout<<v[i].size()<<" "<<v[i][v[i].size()/2];

break;

}

}
