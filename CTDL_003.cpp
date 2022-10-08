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
        int n, s;
        cin >> n >> s;
        int v[N], w[N];
        string res;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        for (int i = 1; i <= pow(2, n); i++)
        {
            string str = bitset<30>(i).to_string().substr(30 - n, n);
            int sumv = 0, sumw = 0;
            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] == '1')
                {
                    sumv += v[i];
                    sumw += w[i];
                }
            }
            if (sumw <= s && sumv >= sum)
            {
                res = str;
                sum = sumv;
            }
        }
        cout << sum << endl;
        for (int i = 0; i < res.length(); i++)
        {
            cout << res[i] << " ";
        }
    }
    return 0;
}