#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    scanf("%d", &t);
    for(int k = 1; k <= t; k++)
    {
        int n, q;
        scanf("%d%d", &n, &q);
        vector<int>arr;
        for(int i = 1; i <= n; i++)
        {
            int te;
            scanf("%d", &te);
            arr.push_back(te);
        }
        sort(arr.begin(), arr.end());
        cout << "Case " << k << ":" << endl;
        while(q--)
        {
            int a, b;
            scanf("%d%d", &a, &b);
            bool ok = false;
            int ff = lower_bound(arr.begin(), arr.end(), a)-arr.begin();
            int ss = upper_bound(arr.begin(), arr.end(), b)-arr.begin();
            printf("%d\n", ss-ff);
        }
    }
    return 0;
}
