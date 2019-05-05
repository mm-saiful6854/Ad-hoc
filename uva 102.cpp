#include<bits/stdc++.h>

using namespace std;
int B[3];
int G[3];
int C[3];
bool visit[300];
string s ="BGC";

vector<pair<int,string> > ans;

vector<char>res;

void permutation()
{
    int i;
    if(res.size()==3)
    {
        string temp="";
        int sum=0,j;
        for(i=0; i<res.size(); i++)
        {
            temp+=res[i];
            if(res[i]=='B')
            {
                for(j=0; j<3; j++)
                {
                    if(j==i) continue;
                    sum+= B[j];
                }
            }

            if(res[i]=='G')
            {
                for(j=0; j<3; j++)
                {
                    if(j==i) continue;
                    sum+= G[j];
                }
            }

            if(res[i]=='C')
            {
                for(j=0; j<3; j++)
                {
                    if(j==i) continue;
                    sum+= C[j];
                }
            }
        }

        ans.push_back(make_pair(sum,temp));
        return ;
    }


    for(i=0; i<s.size(); i++)
    {
        if(visit[s[i]]==false)
        {
            res.push_back(s[i]);
            visit[s[i]]=true;
            permutation();

            res.pop_back();
            visit[s[i]]=false;
        }
    }
}

int main()
{
    string strs="";
    while(getline(cin,strs))
    {
        int a[3],i,j;
        ans.clear();
        res.clear();
        memset(visit,false,sizeof(visit));
        stringstream ss;
        ss<<strs;
        for(i=1;i<=3; i++)
        {
            for(j=0;j<3;j++){
                ss>>a[j];
            }

            B[i-1]=  a[0];
            G[i-1]= a[1];
            C[i-1]= a[2];

        }
        permutation();
        sort(ans.begin(),ans.end());
        cout<<ans[0].second<<" "<<ans[0].first<<endl;
    }

    return 0;
}
