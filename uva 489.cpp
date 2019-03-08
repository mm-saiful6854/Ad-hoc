#include<bits/stdc++.h>

using namespace std;
bool visited[125];
int main()
{
    int n;


    while(cin>>n)
    {
        if(n==-1)
        {
            break;
        }
        else
        {
             string s,res;
            cin>>s>>res;
            set<int>setres;
            set<int> :: iterator it;

            int i;
            for(i=0;i<s.size();i++)
            {
                setres.insert(s[i]);
            }
            int l = res.size(),stoke=0;

            memset(visited,false,sizeof(visited));

            for(i=0;i<l;i++)
            {
                if(setres.empty())
                {
                    break;
                }
                it=setres.find(res[i]);
                if(it!=setres.end())
                {
                   setres.erase(it);
                   visited[res[i]]=true;
                }
                else{
                        if(visited[res[i]]==false)
                        {
                            stoke++;
                            visited[res[i]]=true;
                        }

                }
            }

            if(stoke<7)
            {
                if(setres.empty())
                    printf("Round %d\nYou win.\n",n);
                else{
                     printf("Round %d\nYou chickened out.\n",n);
                }
            }
            else if(stoke>=7)
            {
                printf("Round %d\nYou lose.\n",n);
            }
        }
    }

    return 0;
}
