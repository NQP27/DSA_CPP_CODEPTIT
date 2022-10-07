#include <bits/stdc++.h>
#define N 10000
using namespace std;
void selectionSort(int a[], int n)
{
    int buoc = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int ping = 0;
        int min_pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_pos])
            {
                min_pos = j;
            }
        }
        // if (min_pos != i)
        // {
        swap(a[i], a[min_pos]);
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