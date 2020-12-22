#include<bits/stdc++.h>

using namespace std;

string solve(string str,int n,int k){

    if(n==0)

    return "";

    for(int i=0;i<n;i++){

        int ascii=(int)str[i];

        if(ascii>=48 && ascii<=57)

        {

            int nextvalue=ascii-'0';

            int byhowmuch=(nextvalue+k)%10;

            str[i]=(char)(byhowmuch+48);

        }else if(ascii>=65 && ascii<=90){

            int nextvalue=ascii-'A';

            int byhowmuch=(nextvalue+k)%26;

            str[i]=(char)(byhowmuch+65);

        }else if((ascii>=97 && ascii<=122))

        {

            int nextvalue=ascii-'a';

            int byhowmuch=(nextvalue+k)%26;

            str[i]=(char)(byhowmuch+97);

        }

    }

return str;

}

int main(){

    int t;

    cin>>t;

    while(t--){

        int n;

        cin>>n;

        int k;

        cin>>k;

        string str;

        cin>>str;

        cout<<solve(str,n,k);

        cout<<endl;

    }

    return 0;

}
