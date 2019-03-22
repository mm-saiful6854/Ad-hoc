#include<bits/stdc++.h>

using namespace std;
bool cmp(char a,char b)
{
    if(tolower(a)==tolower(b))
            return a<b;
    return tolower(a)<tolower(b);
}
int main()
{
    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        sort(s.begin(),s.end(),cmp);
       // cout<<s<<endl;

        do
        {
            cout<<s<<endl;
        }
        while(next_permutation(s.begin(),s.end(),cmp));

    }

    return 0;
}
