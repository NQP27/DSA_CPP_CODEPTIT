#include <bits/stdc++.h>
#define N 10000
using namespace std;
int check;
void khoitao(int a[], int &cnt, int n)
{
    cnt = 1;
    a[cnt] = n;
}
void sinh(int a[], int &cnt)
{
    int i = cnt;
    while (i >= 1 && a[i] == 1)
    {
        i--;
    }
    if (i == 0)
    {
        check = 1;
    }
    else
    {
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        for (int j = 1; j <= q; j++)
        {
            cnt++;
            a[cnt] = a[i];
        }
        if (r != 0)
        {
            ++cnt;
            a[cnt] = r;
        }
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
    int t;
    cin >> t;
    while (t--)
    {
        int dem = 0;
        int n, a[N], cnt;
        cin >> n;
        khoitao(a, cnt, n);
        check = 0;
        vector<vector<int> > res;
        while (check == 0)
        {
            dem++;
            vector<int> curr;
            for (int i = 1; i <= cnt; i++)
            {
                curr.push_back(a[i]);
            }
            res.push_back(curr);
            sinh(a, cnt);
        }
        cout << dem << endl;
        for (int i = 0; i < res.size(); i++)
        {
            cout << "(";
            for (int j = 0; j < res[i].size(); j++)
            {
                if (j != res[i].size() - 1)
                {
                    cout << res[i][j] << " ";
                }
                else
                {
                    cout << res[i][j];
                }
            }
            cout << ") ";
        }
        cout << endl;
    }
    return 0;
}