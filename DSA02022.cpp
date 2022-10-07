#include <bits/stdc++.h>
#define N 10000
using namespace std;
int n, a[N], b[N];
void output()
{
    cout << a[1] << a[2] << "/" << a[3] << a[4] << "/" << a[5] << a[6] << a[7] << a[8] << endl;
}
int check1() { return a[1] != 0 or a[2] != 0; }
int check2()
{
    if (a[3] == 0)
    {
        return a[4] == 2;
    }
    else
    {
        return 0;
    }
}
void tryy(int i)
{
    for (int j = 1; j <= 2; j++)
    {
        a[i] = b[j];
        if (i == n)
        {
            if (a[5] == 2 and check1() and check2() and a[3] != 2)
                output();
        }
        else
        {
            tryy(i + 1);
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
    int t = 1;
    while (t--)
    {
        n = 8;
        b[1] = 0;
        b[2] = 2;
        tryy(1);
    }
    return 0;
}