#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);

    //freopen("output.txt","w",stdout);
    int x,y;
    while(cin>>x>>y)
    {
        if(x==0 && y==0)
            break;
        if(x==1 || y==1)
        {
            printf("%d knights may be placed on a %d row %d column board.\n",x*y,x,y);

        }
        else if(x==2)
        {
            int ans =y/4*4+(y%4==1)*2+(y%4>1)*4;

            printf("%d knights may be placed on a %d row %d column board.\n",ans,x,y);

        }
        else if(y==2)
        {
              int ans =x/4*4+(x%4==1)*2+(x%4>1)*4;

            printf("%d knights may be placed on a %d row %d column board.\n",ans,x,y);
        }
        else{
            printf("%d knights may be placed on a %d row %d column board.\n",(x*y+1)/2,x,y);

        }
    }
}
