#include<bits/stdc++.h>

#define ll long long




using namespace std;




int main()

{

    int testCases;
    cin>>testCases;




    while(testCases-->0)

    {

        string s; cin>>s;

        ll ans = 1;




        int arr[26] = {0};

        char a[] = {'a', 'e', 'i', 'o', 'u'};




        for(int i = 0; i < s.length(); i++)

        {

            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')

            arr[s[i]-'a'] = 1;

            else if(s[i] == '_')

            {

                ll c = 0;




                for(int j = 0; j < 5; j++)

                if(arr[a[j]-'a'] == 1)

                c++;




                ans *= c;

            }

        }

        cout<<ans<<endl;

    }

    return 0;

}
