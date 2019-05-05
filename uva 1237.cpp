#include<bits/stdc++.h>

using namespace std;
vector<pair<string,pair<int,int> > >vii;
int main()
{
//    ios_base::sync_with(false);
//    cin.tie(),cout.tie();

    int t;
    scanf("%d",&t);
    while(t--)
    {

        vii.clear();
        int n,lo,hi,i;
        string s;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            cin>>s>>lo>>hi;
            vii.push_back(make_pair(s,make_pair(lo,hi)));
        }
        int q;
        scanf("%d",&q);
        int l =vii.size();
        while(q--)
        {
            int val,cnt=0;
            string ans="";
            cin>>val;

            for(i=0;i<l;i++)
            {
                pair<string ,pair<int,int> > pp = vii[i];
               int L =  pp.second.first;
               int H =  pp.second.second;
               if(val>=L && val<=H){
                    ans  = pp.first;
                    cnt++;
               }
            }
            if(cnt==1)
            {
                cout<<ans<<endl;
            }
            else{
                cout<<"UNDETERMINED"<<endl;
            }
        }
        if(t)cout<<endl;

    }

    return 0;
}
