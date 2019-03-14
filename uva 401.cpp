#include<bits/stdc++.h>
using namespace std;


stack<char>sstP;

stack<char>sstM;
map<char,char>mp;
void mirror()
{
    mp['A']='A';
    mp['E'] = '3';
    mp['H']= 'H';
    mp['I']='I';
    mp['J']= 'L';
    mp['L']='J';


    mp['M']='M';
    mp['O'] = 'O';
    mp['0'] ='0';

    mp['S']='2';
    mp['T']='T';
    mp['U']= 'U';
    mp['V']='V';


    mp['W']= 'W';
    mp['X']='X';
    mp['Y']= 'Y';
    mp['Z']='5';



    mp['1']='1';
    mp['2']= 'S';
    mp['3']='E';
    mp['5']= 'Z';
    mp['8']='8';
}

int main()
{

    // freopen("input.txt","r",stdin);

    //freopen("output.txt","w",stdout);
    string s;


    mirror();

    while(cin>>s)
    {
        int l  = s.size();
        int i=0;
            for(i=0;i<l/2;i++)
            {
                sstP.push(s[i]);
               // sstM.push(s[i]);
            }
            bool pp = true;
            int cntO=0,cntE=0;
        if(l%2!=0)
        {
            i =l/2+1;
            if(mp.find(s[l/2])!=mp.end())
                {
                    if(mp[s[l/2]]==s[l/2])
                         cntO++;
                }


            while(!sstP.empty())
            {
                char ch = sstP.top();
                sstP.pop();
                //cout<<ch<<endl;
                if(ch!=s[i])
                {
                    pp= false;
                    //cout<<ch<<endl;
                }
                if(mp.find(ch)!=mp.end())
                {
                    if(mp[ch]==s[i]){
                            cntO+=2;
                    }
                }
                i++;
            }

            if(cntO==(l))
            {
                if(pp==true)
                    cout<<s<<" -- "<<"is a mirrored palindrome."<<endl<<endl;
                else
                    cout<<s<<" -- "<<"is a mirrored string."<<endl<<endl;
            }
            else
            {
                 if(pp==true)
                    cout<<s<<" -- "<<"is a regular palindrome."<<endl<<endl;
                else
                    cout<<s<<" -- "<<"is not a palindrome."<<endl<<endl;
            }


        }
        else{
            i=l/2;
            while(!sstP.empty())
            {
                char ch = sstP.top();
                sstP.pop();
                //cout<<ch<<endl;
                if(ch!=s[i])
                {
                    pp= false;
                }
                if(mp.find(ch)!=mp.end())
                {
                    if(mp[ch]==s[i]){
                            cntE+=2;
                    }
                }

                i++;
            }

            if(cntE==l)
            {
                if(pp==true)
                    cout<<s<<" -- "<<"is a mirrored palindrome."<<endl<<endl;
                else
                    cout<<s<<" -- "<<"is a mirrored string."<<endl<<endl;
            }
            else
            {
                 if(pp==true)
                    cout<<s<<" -- "<<"is a regular palindrome."<<endl<<endl;
                else
                    cout<<s<<" -- "<<"is not a palindrome."<<endl<<endl;
            }


        }

    }

    return 0;

}
