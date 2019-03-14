#include<bits/stdc++.h>

using namespace std;
int snal[150];
int player[1000008];
int main()
{
   // freopen("input.txt","r",stdin);

   // freopen("output.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int p,s,r;
        cin>>p>>s>>r;
        int i;

        for(i=1;i<=p+1;i++)
        {
            player[i]=1;
        }
        memset(snal,0,sizeof(snal));
        int a,b;
        for(i=1;i<=s;i++)
        {
            cin>>a>>b;
            snal[a]=b;
        }

        bool flag =false;

        for(i=1;i<=r;i++)
        {
            cin>>a;

            if(flag==false && p!=0)
            {
                int r = i%p;
                if(r==0){
                    r+=p;
                }

                if(snal[player[r]+a]!=0)
                {
                    player[r]=snal[player[r]+a];

                    if(player[r]>=100)
                    {
                        player[r] =100;
                        flag=true;
                    }
                }
                else{

                    player[r] = player[r]+a;
                    if(player[r]>=100)
                    {
                        player[r] =100;
                        flag=true;
                    }
                }
            }
        }

        for(i=1;i<=p;i++)
        {
            printf("Position of player %d is %d.\n",i,player[i]);
        }
    }
    return 0;
}
