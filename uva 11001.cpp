#include<bits/stdc++.h>

using namespace std;


int main()
{


    int count_=0,i;
    double ans,maxn=0.0,vt,vo,div,r;
    while(scanf("%lf %lf",&vt,&vo)==2)
    {
        count_=0;
        maxn=0.0;

        if(vt==0 && vo==0) break;
        for(i=1;vo<(vt/i); i++)
        {
             div = vt/i;
             r  = div - vo;
             ans = 0.3 * sqrt(r)*i;
            // cout<<ans<<" "<<div<<" "<<r<<endl;
           if(ans>maxn)
           {
               if(fabs(ans-maxn)<=1e-12){
                    count_=0;
               }
               else{
                count_= i;
               }
               maxn = ans;
           }

        }
        printf("%d\n",count_);

    }

    return 0;
}
