#include <bits/stdc++.h>
#define N 100000
using namespace std;
int k, cnt;
int check(int a[N], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
int min_pos(int a[], int i, int k)
{
    int pos = i;
    int m = k < cnt ? k : cnt;
    for (int x = i; x < i + m; x++)
    {
        if (a[x] < a[i])
        {
            pos = x;
        }
    }
    swap(a[pos], a[i]);
    return pos;
}
int find(int a[], int n, int i)
{
    int max = a[i];
    int pos = i;
    for (int j = i + 1; j < n; j++)
    {
        if (a[j] == max)
        {
            cnt++;
            max = a[j];
            pos = j;
        }
        if (a[j] > max)
        {
            max = a[j];
            pos = j;
            cnt = 1;
        }
    }
    return pos;
}
void tryy(int i, int n, int a[])
{
    if (k < 1 or check(a, n) == 1)
    {
        return;
    }
    cnt = 1;
    int j = find(a, n, i);
    int p = min_pos(a, i, k);
    if (a[i] < a[j])
    {
        swap(a[i], a[j]);
        k--;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
    }
    tryy(i + 1, n, a);
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
        cin >> k;
        cin.ignore();
        string s;
        getline(cin, s);
        int n = s.length();
        int a[20] = {0};
        for (int i = 0; i < n; i++)
        {
            a[i] = s[i] - '0';
        }
        tryy(0, n, a);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << "";
        }
        cout << endl;
    }
    return 0;
}