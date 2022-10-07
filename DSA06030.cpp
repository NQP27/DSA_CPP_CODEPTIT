#include <bits/stdc++.h>
#define N 10000
using namespace std;
int bubbleSort(int a[], int n, int b[100][100])
{
    int buoc = 1;
    for (int i = n - 1; i > -1; i--)
    {
        int ping = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                ping = 1;
            }
        }
        if (ping)
        {
            for (int i = 0; i < n; i++)
            {
                b[buoc][i] = a[i];
            }
            buoc++;
        }
    }
    return buoc;
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
        int n;
        cin >> n;
        int b[100][100];
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int buoc = bubbleSort(a, n, b);
        for (int i = buoc - 1; i > 0; i--)
        {
            cout << "Buoc " << i << ": ";
            for (int j = 0; j < n; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
        if (buoc == 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}