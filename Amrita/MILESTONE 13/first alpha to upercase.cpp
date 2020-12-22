#include<iostream>
#include<string>
using namespace std;
int main (){
    string s;
     getline(cin,s);
     int length=s.size();

	 if(islower(s[0])) s[0] = toupper(s[0]);

    for(int i=0;i<length;i++){
        if (s[i]==' ' && s[i+1]!=' ')
        {
            s[i+1] = toupper(s[i+1]);
        }

    }
    cout<<s;

    return 0;
}
