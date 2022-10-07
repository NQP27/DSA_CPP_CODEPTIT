#include <bits/stdc++.h>
#define N 1000000
using namespace std;
int a[N], b[N], c[N];
map<int, int> mp;
int check(int a[], int i, int j)
{
    for (int x = i + 1; x < j; x++)
    {
        if (a[x] % 2 == 1)
        {
            return 1;
        }
    }
    return 0;
}
int merge(int a[], int l, int m, int r)
{
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    int cnt = 0;
    while (i < x.size() and j < y.size())
    {
        if (x[i] <= y[j])
        {
            a[l] = x[i];
            l++;
            i++;
        }
        else
        {
            if (x[i] % 2 == 0 and y[j] % 2 == 0)
            {
                for (int k = i; k < x.size(); k++)
                {
                    if (check(c, b[x[k]], b[y[j]]) == 1 and x[k] % 2 == 0)
                    {
                        cnt++;
                    }
                }
                a[l] = y[j];
                l++;
                j++;
            }
            else
            {
                a[l] = y[j];
                l++;
                j++;
            }
        }
    }
    while (i < x.size())
    {
        a[l] = x[i];
        l++;
        i++;
    }
    while (j < y.size())
    {
        a[l] = y[j];
        l++;
        j++;
    }
    return cnt;
}

int mergeSort(int a[], int l, int r)
{
    int cnt = 0;
    if (l < r)
    {
        int m = (l + r) / 2;
        cnt += mergeSort(a, l, m);
        cnt += mergeSort(a, m + 1, r);
        cnt += merge(a, l, m, r);
    }
    return cnt;
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
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]] = i;
            c[i] = a[i];
        }
        int cnt = mergeSort(a, 0, n - 1);
        cout << cnt;
        cout << endl;
    }
    return 0;
}