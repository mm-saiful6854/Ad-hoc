#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,x,y;
    char ch;
    cin>>t;

    while(t--)
    {
        cin>>ch>>x>>y;


        if(ch=='r')
        {
            cout<<min(x,y)<<endl;
        }
        else if(ch=='k')
        {
            int nk = ((x*y)+1)/2;
            cout<<nk<<endl;

        }

        else if(ch=='Q')
        {
            cout<<min(x,y)<<endl;
        }
        else if( ch=='K')
        {
            int nk = ((x+1)/2)*((y+1)/2);
            cout<<nk<<endl;
        }
    }
    return 0;
}
