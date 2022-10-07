#include <bits/stdc++.h>
#define N 10000
using namespace std;
void selectionSort(int a[], int n)
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
        // if (min_pos != i)
        // {
        cout << "Buoc " << buoc << ": ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        buoc++;
        // }
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
        int n;
        cin >> n;
        int a[N];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        selectionSort(a, n);
    }
    return 0;
}