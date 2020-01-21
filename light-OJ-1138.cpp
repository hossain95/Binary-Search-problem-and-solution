#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long tailZero(long long a)
{
    long long c = 0;
    for(long long i = 5; i <= a; i *= 5)
    {
        c += (a/i);
    }
    return c;
}
int main()
{
    int t;
    scanf("%d", &t);
    for(int k = 1; k <= t; k++)
    {
        int n;
        scanf("%d", &n);
        ll first = 5;
        ll limit = 5;
        ll res = -1;
        while(1)
        {
            if(tailZero(limit) > n)
            {
                break;
            }
            first = limit;
            limit *= 5;
        }
        ll p = 0;
        while(1)
        {
            ll mid = (first+limit)/2;
            ll quantity = tailZero(mid);
            if(quantity == n)
            {
                p = mid;
                break;
            }
            if(first >= limit)
            {
                break;
            }
            if(quantity > n)
            {
                limit = mid-1;
            }
            else
            {
                first = mid+1;
            }
        }
        p /= 5;
        p = p*5;
        if(tailZero(p) == n)
        {
            res = p;
        }
        printf("Case %d: ", k);
        if(res >= 0)
        {
            printf("%d\n", res);
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}
