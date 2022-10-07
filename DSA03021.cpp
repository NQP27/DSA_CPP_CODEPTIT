#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    while (t--)
    {
        int n;
        int res = INT_MAX;
        int curr;
        cin >> n;
        int a[N], b[N];
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        int min_val = *st.begin();
        // cout << min_val;
        for (int div = 1; div <= min_val; div++)
        {
            int check = 1;
            curr = 0;
            for (int i = 0; i < n; i++)
            {
                int x = a[i] / div;
                if (a[i] / x != div)
                {
                    check = 0;
                    break;
                }
                curr += (a[i] / (div + 1)) + 1;
            }
            if (check)
                res = res < curr ? res : curr;
        }
        cout << res;
    }
    return 0;
}