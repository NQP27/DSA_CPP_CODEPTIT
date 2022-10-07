#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
// Khoi tao
void khoitao(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
}
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
        int n, k;
        cin >> n >> k;
        int a[12][12];
        int b[N];
        khoitao(b, n);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<string> v;
        int cnt = 0;
        do
        {
            int sum = 0;
            for (int i = 1; i <= n; i++)
            {
                sum += a[i][b[i - 1]];
            }
            if (sum == k)
            {
                string s = "";
                cnt++;
                for (int i = 1; i <= n; i++)
                {
                    s += b[i-1] + '0';
                    s += " ";
                }
                v.push_back(s);
            }
        } while (next_permutation(b, b + n));
        cout << cnt << endl;
        for (int i = 0; i <v.size(); i++)
        {
            cout << v[i] << endl;
        }
    }
    return 0;
}