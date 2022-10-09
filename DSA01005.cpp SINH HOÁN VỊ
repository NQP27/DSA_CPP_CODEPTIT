#include <bits/stdc++.h>
#define N 100
using namespace std;
int check;
// Khoi tao
void khoitao(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
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
        int n, a[N];
        cin >> n;
        khoitao(a, n);
        do
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << "";
            }
            cout << " ";
        } while (next_permutation(a, a + n));
        cout << endl;
    }
    return 0;
}
