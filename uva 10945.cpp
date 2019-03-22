// Mother bear UVA 10945

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s=="DONE")
            break;

        string ss="";
        int i;

        for(i=0; i<s.size(); i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<= 'z'))
            {
                ss+=tolower((s[i]));
            }
        }

        int l =ss.size();
        //cout<<ss<<endl;
        bool flag = true;
        for(i=0; i<l/2; i++)
        {
            if(ss[i]!=ss[l-i-1])
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            cout<<"You won't be eaten!"<<endl;
        }
        else
        {
            cout<<"Uh oh.."<<endl;
        }
    }
    return 0;
}
