#include <bits/stdc++.h>
#define N 1000000
using namespace std;
#define ll long long
ll res;
void merge(int a[], int l, int m, int r)
{
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
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
            res += x.size() - i;
            a[l] = y[j];
            l++;
            j++;
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
}

void mergeSort(int a[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    else
    {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
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
        res = 0;
        int a[N];
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        mergeSort(a, 0, n - 1);
        cout << res << endl;
        ;
    }
    return 0;
}