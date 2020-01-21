#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    //cin >> t;
    scanf("%d", &t);
    for(int k = 1; k <= t; k++)
    {
        int n, q;
        //cin >> n >> q;
        scanf("%d%d", &n, &q);
        //int arr[100005] = {};
        //set<int>ss;
        vector<int>arr;
        for(int i = 1; i <= n; i++)
        {
            int te;
            scanf("%d", &te);
            arr.push_back(te);
            //ss.insert(te);
        }
        sort(arr.begin(), arr.end());
        cout << "Case " << k << ":" << endl;
        while(q--)
        {
            int a, b;
            //cin >> a >> b;
            scanf("%d%d", &a, &b);
            bool ok = false;
            int ff = lower_bound(arr.begin(), arr.end(), a)-arr.begin();
            int ss = upper_bound(arr.begin(), arr.end(), b)-arr.begin();
            //cout << ss-ff << endl;
            printf("%d\n", ss-ff);
        }
    }
    return 0;
}
