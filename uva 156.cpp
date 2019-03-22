#include<bits/stdc++.h>

using namespace std;

vector<string>vs[1005];
vector<string>vss;
map<string,int>mp;

int main()
{
    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    string s;
    int i,mina=INT_MAX,maxn=0,cases=0;
    while(getline(cin,s))
    {
        string p="",val="";
        if(s=="#")
            break;


        s+=' ';
        for(i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
            {
                if(!val.empty())
                {
                    sort(val.begin(),val.end());
                    if(mp.find(val)==mp.end())
                    {
                        mp[val]=cases++;
                    }
                    vs[mp[val]].push_back(p);
//                    mina= min(mina,val);
//                    maxn= max(maxn,val);
                    val="";
                    p="";

                }
                continue;
            }
            p+=(s[i]);
            val+=toupper(s[i]);

        }
    }
    int j;
    //cout<<"cases : "<<cases<<endl;
    for(i=0; i<cases; i++)
    {
        if(vs[i].size()==1)
        {
            vss.push_back(vs[i][0]);

        }
       // cout<<i<<" : ";
//        for(j=0; j<vs[i].size(); j++)
//        {
//            cout<<vs[i][j]<<" ";
//        }
        //cout<<endl;

    }
    sort(vss.begin(),vss.end());

    for(i=0; i<vss.size(); i++)
    {
        cout<<vss[i]<<endl;
    }


    return 0;
}
