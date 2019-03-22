#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;
    while(t--)
    {
            int i,mn=-1,maxn=INT_MAX,cnt_mn=0,cnt_m=0,x;
            for(i=0;i<10;i++)
            {
                cin>>x;
                if(mn<x)
                {
                    mn=x;
                    cnt_mn++;
                }

                if(maxn>x)
                {
                    maxn=x;
                    cnt_m++;
                }

            }
            if(cnt_mn==10 || cnt_m==10)
            {
                cout<<"Ordered"<<endl;
            }
            else{
                cout<<"Unordered"<<endl;
            }
    }
    return 0;
}
