#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,n;
        scanf("%d",&n);
        int A[n+2];
        int maxn = -150003,ans=-150003;
        for(i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
            ans = max(ans,(maxn- A[i]));
            maxn = max(maxn,A[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
