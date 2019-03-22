#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,maxn=-1,mina=INT_MAX,x;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mina= min(mina,x);
            maxn= max(maxn,x);
        }
        cout<<(maxn-mina)*2<<endl;
    }
    return 0;

}
