/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>

using namespace std;




int main(){

int t;

cin>>t;

while(t--){

string s;

cin>>s;

int i,count=0;

for(i=0;i<s.length();i++){

if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){

count++;

}

}

cout<<count<<endl;

}




return 0;

}

