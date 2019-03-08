#include<bits/stdc++.h>
using namespace std;
bool visited[53];
bool card[53];
int main()
{

    freopen("input.txt","r",stdin);

    freopen("output.txt","w",stdout);
    int pri[6];
    int p[2],k=0;


    while(cin>>pri[0]>>pri[1]>>pri[2]>>p[0]>>p[1])
    {
        if(!pri[0] && !pri[1] && !pri[2] && !p[0] && !p[1])
        {
            break;
        }

        memset(visited,false,sizeof(visited));
        memset(card,false,sizeof(card));
        int i,j,cnt=0;
        bool flag = false;
        for(i=0; i<2; i++)
        {
            flag=false;
            card[p[i]]=true;
            sort(pri,pri+3);
            for(j=0; j<3; j++)
            {
                card[pri[j]]=true;
                if(visited[j]==false && p[i]<pri[j])
                {
                    flag= true;
                    break;
                }
            }
            if(flag==true)
            {
                visited[j]=flag;
                cnt++;
            }

        }
        if(cnt==2)
        {
            cout<<"-1"<<endl;

        }
        else if(cnt==0)
        {
            for(i=1; i<=52; i++)
            {
                if(card[i]==false)
                {
                    cout<<i<<endl;
                    break;
                }
            }

        }
        else
        {
            int m=-1;
            for(i=0; i<3; i++)
            {
                if(visited[i]==false)
                {
                    m=max(m,pri[i]);
                }
            }
            flag=false;
            for(i=m+1; i<=52; i++)
            {
                if(card[i]==false)
                {
                    cout<<i<<endl;
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            {
                cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}
