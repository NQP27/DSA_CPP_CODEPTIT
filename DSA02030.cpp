#include <bits/stdc++.h>
#define N 100000
using namespace std;
char letters[30] = {'a', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int check;
int n, k, a[N];
void output()
{
    for (int i = 1; i <= k; i++)
    {
        cout << letters[a[i]];
    }
    cout << endl;
}
void tryy(int i)
{
    for (int j = a[i - 1]; j <= n; j++)
    {
        a[i] = j;
        if (i == k)
        {
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
        // cin >> n >> k;
        char c;
        cin >> c >> k;
        a[0] = 1;
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