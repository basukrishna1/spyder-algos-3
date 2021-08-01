#include<bits/stdc++.h>

using namespace std;

int main()
{

    int i, n,l=1,p=1,j;
    cin >> n;
    for(j=2; j<=n; j++)
    {

        for(i=2;i<= (j/2);i++)
        {

            if(j%i==0)
            {
                i=j;
                break;
            }
        }
        if(i!=j)
        {
            p++;
            l=l+p;
        }
    }
  cout<<l;
return 0;
}
