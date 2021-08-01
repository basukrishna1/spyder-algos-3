#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n=0,sum=0,c=1;
    cin>>s;
    if(s.size()==1)
    {
    cout<<0;
    return 0;
    }
    for(long i=0;i<s.size();i++)
        {
              n=n+(s[i]-'0');
        }

    if(n>0&&n<10)
        {
        cout<<1;
        return 0;
        }
    while(sum>=10 || n>0)
    {
        if(n==0)
        {
            c++;
            n=sum;
            sum=0;
        }
        sum+=n%10;
        n=n/10;
    }
     cout<<c+1;


    return 0;
}
