#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    while(scanf("%d",&k)==1)
    {
        int j=0,i;
//        memset(X,0,sizeof(X));
//        memset(Y,0,sizeof(Y));

            int X[k];
            int Y[k];
        for(i=k+1;i<=2*k;i++){
            if((k*i)%(i-k)==0)
            {
                //if((k*i)/(i-k)<=k) break;
                Y[j] = i;
                X[j] = (k*i)/(i-k);
                j++;

            }
        }
        printf("%d\n",j);
        for(i=0;i<j;i++)
        {
            printf("1/%d = 1/%d + 1/%d\n",k,X[i],Y[i]);
        }

    }
    return 0;
}
