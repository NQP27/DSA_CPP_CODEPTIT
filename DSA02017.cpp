#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check, n, cnt;
int point, res;
int b[10][10];
void tryy(int i, int used[], int d1[], int d2[], int a[], int x)
{
    if (i == x)
    {
        i++;
    }
    for (int j = 2; j <= n; j++)
    {
        if (used[j] == 0 and d1[i - j + n] == 0 and d2[i + j - 1] == 0)
        {
            a[i] = j;
            point += b[i][j];
            used[j] = d1[i - j + n] = d2[i + j - 1] = 1;
            if (i == n)
            {
                cout << point << endl;
            }
            else
            {
                tryy(i + 1, used, d1, d2, a, x);
            }
            used[j] = d1[i - j + n] = d2[i + j - 1] = 0;
            point -= b[i][j];
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
        res = INT_MAX;
        point = 0;
        cnt = 0;
        cin >> n;
        int used[N], d1[N], d2[N], a[N];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> b[i][j];
            }
        }
        for (int i = 2; i <= n; i++)
        {
            point += b[i][1];
            used[1] = 1;
            d2[i] = 1;
            d1[n + i - i] = 1;
            tryy(1, used, d1, d2, a, i);
            used[1] = 0;
            d2[i] = 0;
            d1[n + i - 1] = 0;
            point = 0;
        }
        cout << res << endl;
    }
    system("pause");
    return 0;
}