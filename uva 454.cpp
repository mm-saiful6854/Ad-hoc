#include<bits/stdc++.h>
using namespace std;

vector<string>vec;

vector<pair<string,string> >resv;

vector<pair<string,int> >res[105];

map< pair<int,int> ,bool>mb;

int feq[259];

bool anagram(int x,int y)
{
    memset(feq,0,sizeof(feq));

    string s1 = vec[x];
    string s2 = vec[y];
    int i;
    for(i=0; i<s1.size(); i++)
    {
       if(s1[i]==' ')
        continue;
        feq[(int)(s1[i])]++;
    }

    for(i=0; i<s2.size(); i++)
    {
        if(s2[i]==' ')
        continue;
        feq[(int)(s2[i])]--;
    }

    for(i=0; i<258; i++)
    {
        if(feq[i])
            return false;
    }

    return true;
}


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,cases=0;
    cin>>t;

    cin.ignore();

    string s;

    getline(cin,s);

    string sepa="";

    while(t--)
    {
        int i;
        while(getline(cin,s) && s!="")
        {
            vec.push_back(s);
        }

        int l =vec.size(),j,k;
        sort(vec.begin(),vec.end());
        for(i=0; i<l-1; i++)
        {
            for(j=i+1; j<l; j++)
            {

                if(anagram(i,j))
                {
                    res[i].push_back(make_pair(vec[j],j));
                    res[j].push_back(make_pair(vec[i],i));
                }
            }
            if(res[i].size()==0)
                continue;

            sort(res[i].begin(),res[i].end());
            for(k=0; k<res[i].size(); k++)
            {
                pair<string,int> pp = res[i][k];
                int index = pp.second;
                string ss=pp.first;
                if(vec[i]<ss)
                {
                    if(mb.find(make_pair(i,index))==mb.end())
                    {
                        resv.push_back(make_pair(vec[i],ss));
                        mb[make_pair(i,index)]=true;
                        mb[make_pair(index,i)]=true;
                    }
                }
                else
                {
                    if(mb.find(make_pair(index,i))==mb.end())
                    {
                        resv.push_back(make_pair(ss,vec[i]));
                        mb[make_pair(index,i)]=true;
                        mb[make_pair(i,index)]=true;
                    }
                }
            }

        }
        cout<<sepa;
        sepa="\n";
        bool flag=false;
        sort(resv.begin(),resv.end());

        for(i=0; i<resv.size(); i++)
        {
            pair<string,string> ppp = resv[i];
            flag=true;
            cout<<ppp.first<<" = "<<ppp.second<<endl;
        }

        vec.clear();
        mb.clear();
        resv.clear();
        for(i=0; i<102; i++)
            res[i].clear();
//
//            if(t && flag)
//                 puts("");
    }
    return 0;
}
