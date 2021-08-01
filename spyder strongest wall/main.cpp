#include<bits/stdc++.h>

using namespace std;
int strong(int arr[], int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];


    bool dp[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;


    for (int i = 1; i <= n; i++)
        {
        for (int j = 1; j <= sum/2; j++)
        {

            dp[i][j] = dp[i - 1][j];

            if (arr[i - 1] <= j)
                dp[i][j] |= dp[i - 1][j - arr[i - 1]];
        }
    }

    int diff;

    for (int j = sum / 2; j >= 0; j--) {
        if (dp[n][j] == true) {
            diff = j;
            break;

        }
    }
    return diff;
}


int main()
{
    int n,m,sum=0;
    cin>>n;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
        cin>>a[i];
    if(n==1)
        {
            for(int i=0;i<m;i++)
                sum+=a[i];
                cout<<sum;
        }
    else
       {
        cout<<  strong(a,m);
       }
return 0;
}
