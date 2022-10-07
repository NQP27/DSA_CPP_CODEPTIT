#include <bits/stdc++.h>
#define N 100000
using namespace std;
int n, k, a[N], used[N];
char letters[30] = {'a', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
void output()
{
    for (int i = 1; i <= n; i++)
    {
        cout << letters[a[i]];
    }
    cout << endl;
}
int check1()
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            return i == 1 or i == n or a[i - 1] == 5 or a[i + 1] == 5;
        }
    }
    return 1;
}
int check2()
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 5)
        {
            return i == 1 or i == n or a[i - 1] == 1 or a[i + 1] == 1;
        }
    }
    return 1;
}
void tryy(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (used[j] == 0)
        {
            a[i] = j;
            used[j] = 1;
            if (i == n)
            {
                if (check1() == 1 and check2() == 1)
                {
                    output();
                }
            }
            else
            {
                tryy(i + 1);
            }
            used[j] = 0;
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
        char c;
        cin >> c;
        for (int i = 1; i <= 26; i++)
        {
            if (letters[i] == c)
            {
                n = i;
                break;
            }
        }
        tryy(1);
    }
    return 0;
}