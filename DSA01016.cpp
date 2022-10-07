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
        int n, a[N], cnt;
        cin >> n;
        khoitao(a, cnt, n);
        check = 0;
        while (check == 0)
        {
            cout << "(";
            for (int i = 1; i <= cnt; i++)
            {
                cout << a[i];
                if (i != cnt)
                {
                    cout << " ";
                }
            }
            cout << ") ";
            sinh(a, cnt);
        }
        cout << endl;
    }
    return 0;
}