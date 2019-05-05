#include<bits/stdc++.h>
using namespace std;
int bars[1003];
int X,n;
bool subset(int index,int sum)
{
    if(sum==0)
    {
        return true;
    }
    if(sum<0) return false;
    if(index>=n) return false;
    return (subset(index+1,sum-bars[index]) || subset(index+1,sum));
}

int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        memset(bars,0,sizeof(bars));
        scanf("%d %d",&X,&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&bars[i]);
        }

        if(subset(0,X)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
