#include<bits/stdc++.h>

using namespace std;
int dx[]= {0,0,-1,1,-1,-1,1,1};
int dy[]= {-1,1,0,0,-1,1,-1,1};
int res[103][103];
bool valid(int x,int y,int n,int m)
{
    if(x<0 || y<0 || x>=n || y>=m)
        return false;

    return true;
}


int main()
{
   //freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
    int n,m,cases=0;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;

        int i,j;
        int x,y,k;
        char ch;
        int res[n][m];
        memset(res,0,sizeof(res));


        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>ch;
                if(ch=='*')
                {
                    res[i][j]=-1;
                    for(k=0; k<8; k++)
                    {
                        x = i+dx[k];
                        y = j+dy[k];
                        if(valid(x,y,n,m))
                        {
                            if(res[x][y]!=-1)
                                res[x][y]++;
                        }
                    }
                }
            }
        }
        if(cases!=0)
            cout<<endl;
        printf("Field #%d:\n",++cases);
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(res[i][j]==-1)
                    cout<<"*";
                else
                    cout<<res[i][j];
            }
            cout<<endl;
        }

    }
    return 0;
}
