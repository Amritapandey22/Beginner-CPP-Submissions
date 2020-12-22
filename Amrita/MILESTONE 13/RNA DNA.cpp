#include <bits/stdc++.h>
using namespace std;
int main()

{

int t;

cin>>t;

while(t--)

{

int n, fg=1;

cin>>n;

string s, temp;

cin>>s;

for(int i=0; i<n; i++)

{

if(s[i] == 'T')

temp += 'A';

else if(s[i] == 'A')

temp += 'T';

else if(s[i] == 'G')

temp += 'C';

else if(s[i] == 'C')

temp += 'G';

else

{

cout<<"Error RNA nucleobases found!"<<"\n";

fg = 0;

}

}

if(fg)

cout<<temp<<"\n";

}
return 0;
}
