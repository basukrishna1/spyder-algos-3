#include <bits/stdc++.h>
using namespace std;

bool check(long long mid,long long ar[],long n,long k)
{
    long long int count=1,sum=0;
    for (int i=0;i<n;i++)
    {
        if (ar[i]>mid)
            return false;
        if(sum+ar[i]<=mid)
           sum+=ar[i];
        else
        {
            count++;
            sum = ar[i];
        }
        if (count>k)
        return false;
    }
    if (count>k)
        return false;
    return true;
}

int main()
{
    long long n,k;
    cin>>k;
    cin>>n;
    long long arr[n];
    for(long i=0;i<n;i++)
        cin>>arr[i];


    long long start =0,last=0;

    for(long i=0;i<n;i++)
    {
        last += arr[i];
    }

    long long result=0;
    while(start<=last)
    {
        long long mid = (start+last)/2;
        if(check(mid, arr, n, k))
        {
            result=mid;
            last=mid-1;
        }
        else
        {
            start=mid + 1;
        }
    }

    cout<<result;
    return 0;
}
