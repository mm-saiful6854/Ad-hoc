#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
    char ch;

    while(1)
    {
        string s;
        getline(cin,s);
        if(s[0]=='G')
        {
            break;
        }
        else
        {
            int i,cnt=0;
            int score=0;
           //cout<<s<<endl;
            for(i=0; i<s.size();)
            {
                if(s[i]=='X')
                {
                    score+=10;
                    if(s[i+2]=='X')
                    {
                        score+=10;

                    }
                    if(s[i+2]<='9' && s[i+2]>='0')
                    {
                        score+=((int)s[i+2]-48);
                    }

                    if(s[i+4]=='X')
                    {
                        score+=10;
                    }
                    else
                    {
                        if(s[i+4]=='/')
                        {
                            score+=10;
                            score-=((int)s[i+2]-48);
                        }
                        if(s[i+4]<='9' && s[i+4]>='0')
                        {
                            score+=((int)s[i+4]-48);
                        }
                    }


                   //cout<<"s : "<<s[i]<<" score : "<<score<<endl;
                    i+=2;
                    cnt++;

                }
                else if(s[i]<='9' && s[i]>='0')
                {
                    if(s[i+2]=='/')
                    {
                        score+=(10);
                        if(s[i+4]=='X')
                        {
                            score+=10;
                        }
                        else if(s[i+4]<='9' && s[i+4]>='0')
                        {
                            score+=((int)s[i+4]-48);
                        }

                        //cout<<"s : "<<s[i]<<" score : "<<score<<endl;
                        i+=4;
                    }
                    else
                    {
                        score+=((int)s[i]-48)+((int)s[i+2]-48);
                       // cout<<"s : "<<s[i]<<" score : "<<score<<endl;
                        i+=4;
                    }

                    cnt++;

                }

                if(cnt==10)
                    break;

            }
            cout<<score<<endl;
            s="";
        }

    }

    return 0;
}
