#include <bits/stdc++.h>
#define N 10000
using namespace std;

int selectionSort(int a[], int n, int b[100][100])
{
    int buoc = 1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                swap(a[i], a[j]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            b[buoc][i] = a[i];
        }
        buoc++;
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
        int n, a[N];
        int b[100][100];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int buoc = selectionSort(a, n, b);
        for (int i = buoc - 1; i > 0; i--)
        {
            cout << "Buoc " << i << ": ";
            for (int j = 0; j < n; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}