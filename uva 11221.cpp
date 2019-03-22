// Magic Square Palindrome UVA 11221

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,cases=0;
    cin>>t;
    getchar();
    while(t--)
    {
        string s,ss="";
        getline(cin,s);
        int i;
        int l =s.size();
        for(i=0;i<l;i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
            {
                ss+=s[i];
            }
        }

        l = ss.size();
        bool palindrome = true;
        for(i=0;i<l/2;i++)
        {
            if(ss[i]!=ss[l-i-1])
            {
                palindrome = false;
                break;
            }
        }

        if(palindrome)
        {
            double k = sqrt(l);
           // printf("%lf\n",k);
            if(k == (int)k)
            {
                printf("Case #%d:\n%d\n",++cases,(int)k);
            }
            else
            {
                 printf("Case #%d:\nNo magic :\(\n",++cases);
            }


        }
        else{
                printf("Case #%d:\nNo magic :\(\n",++cases);

        }
    }

    return 0;
}
