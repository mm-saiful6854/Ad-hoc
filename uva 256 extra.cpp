#include<bits/stdc++.h>

using namespace std;
int squa[10005];
void pre()
{
    int i=0;
    for(i=0;i<=9999;i++) squa[i]=(i*i);
}
int main()
{
    pre();
    int n,i;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<=9999;i++)
        {
            if(squa[i]>=(int) powl(10,n)) break;
            else{
                int f = squa[i]/(int)(powl(10,n/2));
                int s = squa[i]%(int)(powl(10,n/2));
                if((s+f)*(s+f) == squa[i]){
                    cout<<setw(n)<<setfill('0')<<squa[i]<<endl;
                }
            }
        }
    }
    return 0;
}
